#include <iostream>
#include <cmath>
using namespace std;

typedef long long int number;

number minEvenRecursive(number* arr, size_t size){
// Возвращает минимальный элемент массива среди имеющих чётные индексы
	if(size<=2){
		return *arr;
	}
	return min(*arr, minEvenRecursive(arr+2, size-2));
}

number minEven(number* arr, size_t size){
// Возвращает минимальный элемент массива среди имеющих чётные индексы
	number minNumber = arr[0];
	for(size_t i=2; i<size; i+=2){
		if(minNumber>arr[i]){
			minNumber=arr[i];
		}
	}
	return minNumber;
}

int main(){
	number mas1[]={1,3,4,};
	number mas2[]={1,1,1,};
	number mas3[]={-101,561,1,};
	number mas4[]={101,-561,1,7,8};
	number mas5[]={1};
	number mas6[]={101,561,1,7,-8};

	if(
		minEvenRecursive(mas1,3)!=1
	||
		minEvenRecursive(mas2,3)!=1
	||
		minEvenRecursive(mas3,3)!=-101
	||
		minEvenRecursive(mas4,3)!=1
	||
		minEvenRecursive(mas5,1)!=1
	||
		minEvenRecursive(mas6,5)!=-8

	||

		minEven(mas1,3)!=1
	||
		minEven(mas2,3)!=1
	||
		minEven(mas3,3)!=-101
	||
		minEven(mas4,3)!=1
	||
		minEven(mas5,1)!=1
	||
		minEven(mas6,5)!=-8
	){
		cout<<"Программа работает с ошибкой"<<endl;
		return -1;
	}
	cout<<"Программа работает правильно"<<endl;
	return 0;
}
