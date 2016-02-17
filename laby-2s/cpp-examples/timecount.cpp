#include <iostream>
#include <ctime> // Заголовочный файл, содержащий функции работы со временем
using namespace std;

int main(){
	cout<<"Поехали!"<<endl;

	// Получаем начальное время в относительных единицах
	unsigned int start_time =  clock();

	int rez=7;
	for(int i=0; i<1000000000; i++){
		//Загрузим компьютер какими-нибудь бессмысленными вычислениями
		rez*=(i-3);
		rez%=(i+1);
		rez+=i*i/(i+5);
	}

	// Конечное время в относительных единицах
	unsigned int end_time = clock();
	cout<<rez<<endl;
	// Искомое время в секундах
	unsigned int total_time=1.0*(end_time - start_time)/CLOCKS_PER_SEC;
	//CLOCKS_PER_SEC равен количеству относительных единиц в секунде
	cout<<total_time<<endl;
	return 0;
}
