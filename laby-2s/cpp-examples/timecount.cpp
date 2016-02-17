#include <iostream>
#include <ctime>
using namespace std;

int main(){
	cout<<"А!"<<endl;//А А А
	//Б А Б
	unsigned int start_time =  clock(); // получаем начальное время в относительных единицах
	int rez=7;
	for(int i=0; i<1000000000; i++){
		//Загрузим компьютер какими-нибудь бессмысленными вычислениями
		rez*=(i-3);
		rez%=(i+1);
		rez+=i*i/(i+5);
	}

	unsigned int end_time = clock(); // конечное время в относительных единицах
	cout<<rez<<endl;
	unsigned int total_time=1.0*(end_time - start_time)/CLOCKS_PER_SEC; // искомое время в секундах
	//CLOCKS_PER_SEC равен количеству относительных единиц в секунде
	cout<<total_time<<endl;
	return 0;
}

//йцу кен гшщ зх ъфывапролджэячсмитьбюё
//ЙЦУ КЕН ГШЩ ЗХ ЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮЁ	
