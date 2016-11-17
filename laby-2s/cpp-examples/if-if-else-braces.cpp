#include <iostream>

using namespace std;

int main () {

	cout << "Введите два числа (нуля или единицы):" << endl;
	bool a,b;
	cin >> a >> b;

	cout << "Первый блок" << endl;
	if(a)
		if(b)
			cout << "a &  b" << endl;
		else
			cout << "a & !b" << endl;

	// Эта конструкция работает так, как и задумано (судя по отступам).
	// else "прикрепляется" к последнему if

	cout << "Второй блок" << endl;

	// А вот ниже задумка программиста не выполнится...

	if(a)
		if(b)
			cout << "a & b" << endl;
	else
		cout << "!a" << endl;

	// И, например, при входных данных "1 0" будет выведено сообщение "!a"
	// Поэтому лучше ставить скобочки!

	cout << "Третий блок" << endl;

	if(a) {
		if(b) {
			cout << "a & b" << endl;
		}
	} else {
		cout << "!a" << endl;
	}

	cout << "Конец вывода" << endl;

	return 0;
}
