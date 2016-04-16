#include <iostream>
using namespace std;

void cout_arr(int* arr, size_t size) throw (int){
// Типы возбуждаемых исключений можно и не указывать.
// Так тоже будет корректно:
// void cout_arr(int* arr, size_t size) {
// Но если указывать, то и в теле, и в прототипе!

	if(!size){
		// Что-то пошло не так: длина массива равна 0
		throw 0; // Бросаем исключение
		// throw в чём-то подобен return: он прерывает выполнение функции
		cout<<"Это сообщение никогда не будет выведено на экран"<<endl;
	}
	for(size_t i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

// Функция поиска среднего арифметического всех отрицательных элементов массива
int neg_avg(int* arr, size_t size) throw(int,double) {
	if(!size){
		// В целях унификации бросаем такое же исключение
		throw 0;
	}
	int sum=0,count=0;
	for(size_t i=0; i<size; i++){
		if(arr[i]<0){
			sum+=arr[i];
			count++;
		}
	}
	if(!count){
		throw 0.0; // Вроде такой же 0, но дробный!
	}
	return (double)sum/count;
}

void wrapper(int* arr, size_t size){
	try{
		cout<<endl<<"Пытаемся вычислить neg_avg для массива:"<<endl;
		cout_arr(arr, size);
		cout<<"Среднее арифметическое отрицательных элементов массива:"<<endl;
		cout<<neg_avg(arr, size)<<endl;
	}
	catch(int code){
		cout<<"Ошибка No."<<code<<" попытка обработать массив нулевой длины"<<endl;
	}
	catch(double){
		cout<<"Ошибка: деление на ноль"<<endl;
		throw; // Кидаем исключение дальше
	}
}

int main() {
	int arr1[]={-1,2,-3};
	int arr2[]={+1,2,+3};
	try{
		wrapper(arr1,3);
		wrapper(arr1,0); // Вызовет исключение, но wrapper перехватит исключение
		wrapper(arr2,3); // Вызовет исключение, которое wrapper перехватит, но кинет дальше
		wrapper(arr1,2); // Это не будет вычислено
	}
	catch(...){ // Перехватываем всё подряд
		cout<<"Фатальная ошибка"<<endl;
		return -1;
	}
	return 0;
}
