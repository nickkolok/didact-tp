#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char str[256];
	cout << "Введите строку: " << endl;
	gets(str);
	cout << "Введённая строка: " << endl;
	cout << str << endl;
	int n;
	cout << "Введите число:" << endl;
	cin >> n;
	cout << "Введённое число: " << n << endl;
	cout << "Введите строку: " << endl;
	gets(str);
	cout << "Введённая строка: " << endl;
	cout << str << endl;
	cout << "Вот что бывает, если смешивать cin и gets в одной программе." << endl;
	cout << "После ввода числа в потоке остаётся символ перевода строки,"
		 << "и gets() выбирает его и останавливается." << endl;
	cout << "Введите строку: " << endl;
	gets(str);
	cout << "Введённая строка: " << endl;
	cout << str << endl;
	cout << "Вывод: после каждого cin надо делать \"холостой\" gets" << endl;
	cout << "Введите число:" << endl;
	cin >> n;
	char endlbuf[256];
	gets(endlbuf);
	cout << "Введённое число: " << n << endl;
	cout << "Введите строку: " << endl;
	gets(str);
	cout << "Введённая строка: " << endl;
	cout << str << endl;

	int n1,n2;
	cout << "Введите 2 числа через пробел или перевод строки:" << endl;
	cin >> n1 >> n2;
	gets(endlbuf);
	cout << "Введите строку: " << endl;
	gets(str);
	cout << "Введённая строка: " << endl;
	cout << str << endl;

	cout << "Можно вводить и двумя cin:" << endl;
	cout << "Введите 2 числа через пробел или перевод строки:" << endl;
	cin >> n1;
	// Здесь не надо gets(), иначе нельзя будет ввести через пробел
	// gets(endlbuf);
	cin >> n2;
	gets(endlbuf);
	cout << "Введите строку: " << endl;
	gets(str);
	cout << "Введённая строка: " << endl;
	cout << str << endl;

	return 0;
}
