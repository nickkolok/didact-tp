#include <iostream>
#include <cstdio> // Может быть необходим для использования gets
#include <cstring> // Заголовочный файл, содержащий функции работы со строками
using namespace std;

const unsigned int maxlength=256;

char* remove_last_character(char* str){ // Функция, удаляющая последний символ из строки
	unsigned int len=strlen(str); // Сохраняем длину строки
	char* newstr = new char[maxlength]; // Новый буфер для строки - чтобы не изменять старую
	strcpy(newstr,str); // Копируем из str в newstr
	if(!len){ // Если длина строки равна нулю, не надо с ней ничего делать
		return newstr;
	}
	newstr[len-1]=0; // Последний символ строки делаем нулевым
	return newstr;
}


int main(){
	// Проверяем соответствие результатов ожиданиям
	if(
		// strcmp вернёт ноль, если строки одинаковы
		// Писать remove_last_character("Poehali!")=="Poehali" некорректно!
		// В лучшем случае всегда получите 0, в худшем - ошибку
		strcmp(remove_last_character("Poehali!"),"Poehali")
	||
		strcmp(remove_last_character(""),"")
	||
		strcmp(remove_last_character("a"),"")	
	){
		cout<<"Функция удаления последнего символа строки работает некорректно,"
		    <<" аварийное завершение"<<endl;
		return 1; // При завершении с ошибкой принято возвращать код ошибки - не ноль
	}
	cout<<"Введите строку: "<<endl;
	char* str= new char[maxlength];
	gets(str);
	char* truncated_str=remove_last_character(str);
	cout<<truncated_str<<endl;

	delete[] str; // Не забываем!
	delete[] truncated_str;
	return 0;
}
