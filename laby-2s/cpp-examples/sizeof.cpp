#include <iostream>
using namespace std;

typedef double massiv[5]; // massiv - это новое короткое имя для double[5]

void anyFunction(massiv arr){
	// Передача массива в функцию происходит де-факто как передача указателя,
	// независимо от того, что формально написано.
	cout<< "Внутри функции: "          << endl
		<< "\tМассив: " << sizeof(arr) << endl;
}

int main(){
	massiv doubleMassiv; // То же самое, что double doubleMassiv[5];
	double doubleStaticArr[10];
	double *doubleDynamicArr = new double[200];
	cout
		<< "double:           " << sizeof(double)           << endl
		<< "double*:          " << sizeof(double*)          << endl
		<< "bool:             " << sizeof(bool)             << endl
		<< "bool*:            " << sizeof(bool*)            << endl
		<< "massiv:           " << sizeof(massiv)           << endl
		<< "double[5]:        " << sizeof(double[5])        << endl
		<< "new double[200]:  " << sizeof(new double[200])  << endl
		<< "doubleMassiv:     " << sizeof(doubleMassiv)     << endl
		<< "doubleStaticArr:  " << sizeof(doubleStaticArr)  << endl
		<< "doubleDynamicArr: " << sizeof(doubleDynamicArr) << endl;
	anyFunction(doubleMassiv);
	anyFunction(doubleStaticArr);
	anyFunction(doubleDynamicArr);
	delete[] doubleDynamicArr; // Не забываем!
}
