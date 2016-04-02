#include <iostream>
using namespace std;

template <typename number>
number minimum(number* arr, size_t size);

//template <typename number> // Так делать нельзя, потому что не все типы бывают unsigned
//number minimum(unsigned number* arr, size_t size);

unsigned int minimum(unsigned int* arr, size_t size);

int main() {
	int intArr[]={1,2,3,0,-9,8};
	char charArr[]="qwerty";
	float floatArr[]={1.5,3.14,-2.71728,146.8,3.62};
	unsigned int uintArr[]={1,2,3,0,8};
	unsigned long ulongArr[]={1,2,3,0,8};
	cout<<minimum(  intArr,sizeof(  intArr))<<endl;
	cout<<minimum( charArr,sizeof( charArr)-1)<<endl; // -1 исключает терминальный нуль
	cout<<minimum(floatArr,sizeof(floatArr))<<endl;

	// Явное указание типа в угловых скобках
	cout<<minimum<float>(floatArr,sizeof(floatArr))<<endl;

//	cout<<minimum<char >(floatArr,sizeof(floatArr))<<endl; // Это не будет работать:
//		тип-параметр шаблона не следует использовать для приведения типов

	cout<<minimum((char*)floatArr,sizeof(floatArr))<<endl; // А это будет, но неадекватно

	// При перегрузке нешаблонная функция имеет приоритет
	cout<<minimum( uintArr,sizeof( uintArr))<<endl;

	// Перегруженной функции для unsigned long int нет
	cout<<minimum(ulongArr,sizeof(ulongArr))<<endl;
	return 0;
}

template <typename number>
// Тип-параметр number необходимо объявлять перед каждым заголовком функции
number minimum(number* arr, size_t size){
	number m=arr[0];
	for(size_t i=1; i<size; i++){
		if(m>arr[i]){
			m=arr[i];
		}
	}
	return m;
}

//Отдельная перегруженная функция для неотрицательных чисел
unsigned int minimum(unsigned int* arr, size_t size){
	cout<<"Используется функция для неотрицательных чисел..."<<endl;
	unsigned int m=arr[0];
	if(!m){
		return 0;
	}
	for(size_t i=1; i<size; i++){
		if(m>arr[i]){
			if(!m){
				return 0;
			}
			m=arr[i];
		}
	}
	return m;
}
