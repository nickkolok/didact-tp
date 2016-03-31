#include <iostream>
#include <cstring> // Для memcpy

using namespace std;

typedef unsigned long long int number;

number* renew_cache(number* oldcache, size_t oldsize, size_t newsize){
	cout<<"Обновляем кэш..."<<endl;
	number * newcache = new number[newsize];
	if(oldcache){ // Здесь используется соглашение о нулевых указателях
		memcpy(newcache, oldcache, oldsize*sizeof(number)); // Куда, откуда, сколько
	}	
	for(size_t i=oldsize; i<newsize; i++){
		newcache[i]=0;
	}

	if(oldcache){
		delete[] oldcache;
	}
	return newcache;
}

number fibo(number n){
	// Эти два присваивания должны быть выполнены только один раз
	static size_t cachesize=0;
	static number* cache=0;

	cout<<"Номер числа: "<<n<<"  Размер кэша: "<<cachesize<<endl;

	if(n>=cachesize){ // Числа n в кэше нет и быть не может
		cache=renew_cache(cache,cachesize,n*2);
		cachesize=n*2;
	}
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	if(cache[n]){
		return cache[n];
	}
	cout<<" Честно считаем для n = "<<n<<endl;
	return cache[n]=fibo(n-2)+fibo(n-1); // Важен порядок слагаемых!
}

int main() {
	number n;
	while(true){
		cout<<"Введите n: "<<endl;
		cin>>n;
		cout<<"f ( "<<n<<" ) = "<<fibo(n)<<endl;
	}
	return 0;
}

/* Задание для самостоятельной работы:
Заменить рекурсию на цикл, измерить изменение производительности.
*/
