#include <iostream>
#include <cstdlib> // Для rand() в "чистом" виде
#include <ctime> // Для работы со временем

#define COUNT 5 // Изменить, если столбики не умещаются в консоль

using namespace std;

int main() {
	// Не инициализируем генератор псевдослучайных чисел
	for(int i = 0; i < COUNT; i++)
		cout << rand() << "\t";

	// Инициалиируем единицей - имеем то же самое
	// ПРОВЕРИТЬ НА РАЗНЫХ СИСТЕМАХ !!!
	cout << endl << "__ 1 __" << endl;
	srand(1);
	for(int i = 0; i < COUNT; i++)
		cout << rand() << "\t";

	// Как ни странно, с нулём получается то же самое
	cout << endl << "__ 0 __" << endl;
	srand(0);
	for(int i = 0; i < COUNT; i++)
		cout << rand() << "\t";

	// А теперь двойкой!
	cout << endl << "__ 2 __" << endl;
	srand(2);
	for(int i = 0; i < COUNT; i++)
		cout << rand() << "\t";

	// И ещё раз с начала...
	cout << endl << "__ 2 __" << endl;
	srand(2);
	for(int i = 0; i < COUNT; i++)
		cout << rand() << "\t";

	// Чтобы каждый раз разные - инициализировать текущим временем
	cout << endl << "__ time(0) __" << endl;
	srand(time(0)); // Для этого и подключали <ctime>
	for(int i = 0; i < COUNT; i++)
		cout << rand() << "\t";

	return 0;
}
