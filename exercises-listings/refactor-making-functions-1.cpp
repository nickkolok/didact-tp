#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
	char str[100];
	char *y;
	double mas [256];
	double *mm;
	cout<<"Введите строку:"<<endl;
    gets(str);
    cout << "Исходная строка:" << endl;
    cout << str << endl;
	y=str;
	mm=mas;
	for (int i = 0; i < 256; i++){
		*(mm+i) = 0;
	}

    int n = strlen (str);
    for (int i = 0; i < n; i++) {
		if(i==0||
			(
				((*(y+i)>='A' && *(y+i)<='Z')||(*(y+i)>='a' && *(y+i)<='z'))
				&&
				!((*(y+i-1)>='A' && *(y+i-1)<='Z')||(*(y+i-1)>='a' && *(y+i-1)<='z'))
			)
		){

			int v=0,g=0;
			for(int j=i;((*(y+j)>='A' && *(y+j)<='Z')||(*(y+j)>='a' && *(y+j)<='z'));j++){
				v++;
				if(
					*(y+j)=='A'||*(y+j)=='a'||*(y+j)=='E'||*(y+j)=='e'||
					*(y+j)=='U'||*(y+j)=='u'||*(y+j)=='O'||*(y+j)=='o'
				){
					g++;
				}
			}
			*(mm+i)=1.0*g/v;
		}
	}

	int nmax=0;
	for (int i = 0; i < 256; i++){
		if (*(mm+i)>*(mm+nmax)){
			nmax=i;
		}
	}
	cout<<nmax<<endl;
	for(int j=nmax;((*(y+j)>='A' && *(y+j)<='Z')||(*(y+j)>='a' && *(y+j)<='z'));j++){
		cout<<*(y+j);
	}
	return 0;
}
