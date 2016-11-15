#include <iostream>

#include <stdlib.h>

// Функция abs(), умеющая работать с дробными числами, в gcc объявлена только в нижеследующем файле
// В Visual Studio всё нормально :-(
// #include <cmath>

using namespace std;

int main(){
	cout << abs(3.14) << endl;
}
