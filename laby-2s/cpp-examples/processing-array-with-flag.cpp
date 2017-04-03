/*
С клавиатуры вводится массив из 5 чисел.
Определить, есть ли среди этих чисел хотя бы одно отрицательное.
Ответ на этот вопрос вывести на экран:
либо "Отрицательные числа есть", либо "Отрицательных чисел нет"
*/
#include <iostream>

using namespace std;

int main(){
	double mas[5];

	//{{ Ввод массива
	cout << "Введите массив из 5 элементов " << endl;
	for (int j = 0; j < 5; j++) {
		cin >> mas[j];
	}
	//}} Ввод массива


	bool flag = true; // Предполагаем, что отрицательных чисел нет
	for (int j = 0; j < 5; j++) {
		if (mas[j] < 0) { // Если нам встретилось отрицательно число...
			flag = false; // ... значит, наше предположение неверно. Опускаем флаг.
			break; // И прерываем цикл: проверять дальше нет смысла
		}
	}
	
	if (flag) {
		cout << "Отрицательных чисел нет" << endl;
	} else{
		cout << "Отрицательные числа есть" <<endl;
	}
	
	return 0;
}
