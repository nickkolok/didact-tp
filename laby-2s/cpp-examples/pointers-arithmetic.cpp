#include <iostream>

using namespace std;

int main(){
	int* p= new int;
	cout<<p<<endl;
	cout<<p+1<<endl;
	cout<<(int)(p-(p+1))<<endl;
	cout<<(int)(p)-(int)(p+1)<<endl;
	int i;
	int *p2=&i, *p3 = &i;
	// Манипулятор потока boolalpha заставляет поток выводить true и false словами
	cout<<boolalpha;
	cout<<(p2==p3)<<endl;
	cout<<(p<p3)<<endl;
	cout<<(p2<p)<<endl;
	return 0;
}
