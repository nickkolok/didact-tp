#include <iostream>
#include <cstdio> // Для printf

using namespace std;

int main() {
	char str[] = "abc";
	char* p_str = str;

	cout << str << endl; // Выведет "abc"
	cout << p_str << endl; // Выведет "abc", а вовсе не адрес
	cout << (p_str + 2) << endl; // Выведет "c"
	// Итог: попытка вывести адрес символа приводит к выводу строки,
	// начинающейся с этого символа

	// Даже если на самом деле никакой строки нет, есть один символ
	char ch = '!';
	char* p_ch = &ch;
	cout << p_ch << endl; // Выведет "!" и, возможно, мусор за ним

	// С числами всё штатно
	int i = 0;
	int* p_i = &i;
	cout << p_i << endl; // Выведет адекватный адрес

	// Есть как минимум два способа это преодолеть

	// Явное приведение типов
	cout << (int*)(p_str + 2) << endl; // Выведет адрес

	// Использование printf
	printf("0x%x\n", p_str + 2);

	return 0;
}
