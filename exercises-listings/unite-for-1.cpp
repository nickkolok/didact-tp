#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() 
{
	cout << "Введите строку: ";
	char str[256];
    gets(str);
    int count = 0;
	for (const char *p = str; *p; p++)
        if (*p == 'a')
        	count++;
	cout << "Количество букв 'a' в строке = " <<count<<endl;
	int count1 = 0;
	for (char *q = str; *q; q++)
        if (*q == 'e')
        	count1++;
	cout << "Количество букв 'e' в строке = " <<count1<<endl;
	return 0;
}
