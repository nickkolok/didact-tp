#include <iostream>
#include <cstring>
using namespace std;

const char shift = 'a'-'A'; // Маленькая буква больше большой

// Является ли символ буквой?
inline bool isLetter(char ch){
	static const char shift_mask=~shift;
	ch &= shift_mask; // Срезаем shift-бит
	return (ch<='Z')&&(ch>='A');
}
/* Упражнение:
Проверить, будет ли такая функция работать быстрее, чем четыре прямых сравнения
*/

// Делает все буквы в строке заглавными, небуквеные символы не изменяет
char* toUpper(char* str){
	size_t len=strlen(str);
	char* newstr=new char[len+1];
	for(size_t i=0; i<len; i++){
		if(isLetter(str[i])){
			newstr[i]=str[i]&~shift;
		} else {
			newstr[i]=str[i];
		}
	}
	return newstr;
}

// Делает все буквы в строке маленькими, небуквеные символы не изменяет
char* toLower(char* str){
	size_t len=strlen(str);
	char* newstr=new char[len+1];
	for(size_t i=0; i<len; i++){
		if(isLetter(str[i])){
			newstr[i]=str[i]|shift; // Ставим shift-бит
			// Поднятый shift-бит соответствует незаглавной букве
		} else {
			newstr[i]=str[i];
		}
	}
	return newstr;
}

// Cчитаем количество заглавных букв. Предполагается, что строка содержит только буквы
unsigned int countUpperLetters(char* str){
	unsigned int count=0;
	for(size_t i=0; str[i]; i++){
		// Извлекаем shift-бит и отрицаем его (логически)
		if(!(str[i] & shift)){
			count++;
		}
	}
	return count;
}

// Инвертируем регистр. Предполагается, что строка содержит только буквы
char* invertCase(char* str){
	size_t len=strlen(str);
	char* newstr=new char[len+1];
	strcpy(newstr,str);
	for(size_t i=0; i<len; i++){
		newstr[i]^=shift; // Сокращённое исключающее ИЛИ
		// Если это не буква - будет работать некорректно!
	}
	return newstr;
}

int main(){
	cout<<"Значение shift-сдвига: "<<(int)shift<<endl<<endl;
	cout<<invertCase("BIGsmall")<<endl;
	cout<<invertCase("BIG small")<<endl;
	cout<<countUpperLetters("BIGsmall")<<endl;
	cout<<countUpperLetters("BIG{]small")<<endl; // Работает некорректно
	cout<<toUpper("BIGsmall")<<endl;
	cout<<toUpper("BIG{]small")<<endl; // Работает корректно
	cout<<toLower("BIGsmall")<<endl;
	cout<<toLower("BIG{]small")<<endl; // Работает корректно
}
