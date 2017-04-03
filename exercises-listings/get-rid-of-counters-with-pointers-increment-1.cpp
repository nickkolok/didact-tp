#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int s=0;
	int i=0;
	int j=0; 
	char str[100],newstr[100];
	char *y,*m;
	y = str;
	m = newstr;
	cout << "Введите строку:" << endl;
	gets(str);
	cout << "Исходная строка:";
	cout << str << endl;
	do{
 		if(*(y+i) == *(y+i+1)){
			*(m+j) = 'z';
			i += 2;
			s++;
		} else {
			*(m+j) = *(y+i);
			i++;
		}
		j++;
	}while(*(y+i)); 

	*(m+j) = 0;

	cout << "Полученная строка " << newstr << endl;
	cout << "Количество пар одинаковых сиволов=" << s << endl;

	return 0;
}
