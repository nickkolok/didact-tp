#include <iostream>
using namespace std;

// Обычный параметр
double sqr1(double n) {
	return n*n;
}

// Неизменный параметр
double sqr2(const double n) {
	return n*n;
}

// Ссылка на параметр
double sqr3(double& n) {
	return n*n;
}

// Ссылка на неизменный параметр
double sqr4(const double& n) {
	return n*n;
}

int main() {
	double a = 3.14;

	cout << sqr1(a) << endl;
	cout << sqr2(a) << endl;
	cout << sqr3(a) << endl;
	cout << sqr4(a) << endl;

	cout << sqr1(a+1) << endl;
	cout << sqr2(a+1) << endl;
//	Нельзя передать составное выражение в функцию, требующую ссылку
//	cout << sqr3(a+1) << endl;
	cout << sqr4(a+1) << endl;
	return 0;
}
