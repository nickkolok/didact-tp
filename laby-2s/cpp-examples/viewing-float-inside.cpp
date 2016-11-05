#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	cout << "Введите дробное число:" << endl;
	double d;
	cin >> d;
	float f = d; // Теряем здесь в точности
	cout << "16-чный вид (с двойной точностью):" << endl;
	printf("0x%08X 0x%08X\n", *((int**)(&d)+1), *((int**)(&d)));

	cout << "16-чный вид (с одинарной точностью):" << endl;
	printf("0x%08X\n", *((int**)(&f)));

	//cout << (*((int**)(&d)+1)) << " " << (*((int**)(&d))) << endl; // Не всегда красиво
}
