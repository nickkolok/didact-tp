#include <iostream>	
using namespace std;
int main() 
{
	float mas[10],mmas[10]; 
	float *m,*mm;
	float summ=0;
	int i,j=0,k;
	m=&mas[0];
	mm=&mmas[0];
	for(i=0;i<10;i++) 
	{
		cout<<"Ввод элемента ["<<i<<"] ";
		cin>>*(m+i);
	}
	cout<<"Исходный массив: ";
	for(i=0;i<10;i++)
	{
		cout<<*(m+i)<<" ";
	}
	for(i=0;i<10;i++) 
	{
		if((i%2)==0) 
			summ+=*(m+i);
	}
	cout<<endl;
	cout<<"Сумма элементов с чётными номерами="<<summ<<endl;
	for(i=0;i<10;i++) 
		if((i%2)!=0)
		{
			*(mm+j)=*(m+i);
			j++;
		}
	k=j;
	cout<<"Полученный массив: ";
	for(j=0;j<k;j++)
	{
		cout<<*(mm+j)<<" ";
		
	}
	return 0;
}
