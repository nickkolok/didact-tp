#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char* delete_c_before_k(char* str){ // Название функциям надо давать читаемые
	// Заводим символьный массив для новой строки
	// В результате удаления 'c' длина строки не может увеличиться,
	// следовательно, достаточно массива такой же длины, как и старая строка.
	// Не забываем прибавить 1 - в конце нуль-символ.
	char* newstr = new char[strlen(str)+1];

	int i=0; //Переменная, которая отвечает за номер символа в старой строке
	int j=0; //Переменная, которая отвечает за номер символа в новой строке

	do{
		// Хотя бы один символ (пусть и нуль-символ) переписать придётся,
		// поэтому используем цикл допущения

		if(str[i] == 'c' && str[i+1] == 'k'){
			// Записываем 'k' последним символом в новую строку
			newstr[j] = 'k';
			// Сдвигаем позицию, на которую записываем в новую строку
			j++;
			// Сдвигаем позицию, с которой читаем из старой строки
			i+=2;
		} else {
			// Копируем текущий обрабатываемый символ из старой строки в новую
			newstr[j] = str[i];
			// Сдвигаем позицию, на которую записываем в новую строку
			j++;
			// Сдвигаем позицию, с которой читаем из старой строки
			i++;
		}
		
	}while(str[i]); // Если не достигли конца строки - повторить
	
	return newstr;
}

int main(){
	if(
		// В первую очередь убеждаемся, что "постороннюю" строку оно не изменяет
		strcmp(delete_c_before_k("qwerty"),"qwerty")
	||
		// Пустая строка должна остаться пустой строкой
		strcmp(delete_c_before_k(""),"")
	||
		// Наиболее простой случай
		strcmp(delete_c_before_k("ck"),"k")
	||
		// "ck" стоит в конце строки, но не в начале
		strcmp(delete_c_before_k("click"),"clik")
	||
		// "ck" стоит в середине строки
		strcmp(delete_c_before_k("clicker"),"cliker")
	||
		// Двойное "c" перед "k"
		strcmp(delete_c_before_k("clicck"),"click")
	||
		// А теперь несколько искусственных ситуаций "поковарнее"
		strcmp(delete_c_before_k("c"),"c")
	||
		strcmp(delete_c_before_k("kk"),"kk")
	||
		strcmp(delete_c_before_k("kc"),"kc")
	||
		strcmp(delete_c_before_k("kck"),"kk")
	||
		strcmp(delete_c_before_k("ckc"),"kc")
	||
		strcmp(delete_c_before_k("ckck"),"kk")
	){
		cout<<"Функция замены 'ck' на 'k' работает некорректно, аварийное завершение"<<endl;
		return 1;
	}


	char* str=new char[100];

	cout<<"Введите строку:"<<endl;
	gets(str);
	char* newstr=delete_c_before_k(str);
	cout<<newstr<<endl;

	delete[] str;
	delete[] newstr;

	return 0;
}
