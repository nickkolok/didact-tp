#include <iostream>

using namespace std;

template<typename T>
void bitswap(T& a, T&b){
	a^=b;
	b^=a;
	a^=b;
}

// В качестве атомарного типа берём char - однобайтовый
typedef char atom;

template<class T> // Пригодно для произвольных типов данных
void forceswap(T& a, T& b){
	for(size_t i=0; i<sizeof(T); i+=sizeof(atom)){
		bitswap(
			*((atom*)&a + i)
		,
			*((atom*)&b + i)
		);
	}
}

int main()
{
	int i1=3,i2=-146;
	bitswap(i1,i2);
	cout<<i1<<" "<<i2<<endl;
	double d1=1.5,d2=3.14;
	// bitswap(d1,d2); // Не работает - к дробным поразрядные операторы неприменимы
	forceswap(d1,d2);
	cout<<d1<<" "<<d2<<endl;
	//Поменяем местами, например, стандартный поток вывода и поток ошибок
	forceswap(cerr,cout);
	// Восклицательный знак уйдёт в поток ошибок, но обычно их вывод объединяется,
	// поэтому невооружённым глазом разница не видна
	cout<<"!"<<endl;

	return 0;
}
