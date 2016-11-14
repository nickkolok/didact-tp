#include <iostream>
#include <cmath>
#include <iomanip> // Для манипулятора установки точности

#define double float
using namespace std;

int main() {
	// Считаем численно интеграл от синуса на отрезке от 0 до п/2
	// несколькими способами

	//Устанавливаем максимальную точность
	cout << std::setprecision(12);


	double step = 0.00001;
	double start = 0;
	double end = M_PI/2;

	double sum1 = 0;
	for(double current = start; current <= end; current += step) {
		sum1 += sin(current);
	}
	cout << sum1 * step << endl;

	double sum2 = 0;
	for(double current = start; current <= end; current += step) {
		sum2 += sin(current) * step;
	}
	cout << sum2 << endl;


	double sum3 = 0;
	for(double current = end; current >= start; current -= step) {
		sum3 += sin(current);
	}
	cout << sum3 * step << endl;

	double sum4 = 0;
	for(double current = end; current >= start; current -= step) {
		sum4 += sin(current) * step;
	}
	cout << sum4 << endl;


	return 0;
}

// Точнее оказался не тот вариант, который должен был, а потому - в запасники до лучших времён
