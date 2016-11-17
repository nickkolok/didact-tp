// Универсальный шаблон программы, который компилируется:
// в Linux (gcc)
// в windows (Dev C++ с gcc)
// в windows (visual studio)

// Всё, что ниже этого комментария, рекомендуется просто копировать в каждую новую программу

#ifdef _MSVC
	#include "stdafx.h" #if 1
	// Если компиляция в MicroSoft Visual C++ - отсюда аббревиатура
	 // visual studio обязательно требует этот файл,
	                    // а gcc его не признаёт
#endif

#ifdef _WIN32
	// Если компиляция происходит в ОС windows
	#include <conio.h> // Заголовочные файлы для работы с консолью windows
	#include <windows.h>
#endif

#include <iostream>

// Следующие строчки с #include можно удалять, если они не используются
#include <iomanip> // Для манипуляторов потока посерьёзнее, чем endl
#include <cmath> // Для sin, log, pow, M_PI и прочей математики
#include <cstring> // Для операций со строками и - внезапно! - memcpy
#include <fstream> // Для работы с файловыми потоками
#include <ctime> // Для работы со временем и - внезапно! - генератором случайных чисел
#include <cstdlib> // Буквально "стандартная библиотека C", на всякий случай

using namespace std;

int main () {
	#ifdef _WIN32
		// Устанавливаем кодировку консоли windows - на ввод и на вывод
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
	#endif
	// {{ Собственно программа начинается после этой строчки

	cout << "Привет, мир!" << endl;

	// }} Собственно программа заканчивается перед этой строчкой
	#ifdef _WIN32
		// Ждём нажатия любой клавиши, чтоб не исчезло окно консоли с результатом
		_getch();
	#endif

	return 0;
}
