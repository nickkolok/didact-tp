#include <iostream>
using namespace std;

int g=0;

void swapInt(int& a, int& b=g){
	int buf=a;
	a=b;
	b=buf;
}

int main() {
	int i1=1,i2=2,i3=3;
	swapInt(i1,i2);
	cout<<i1<<" "<<i2<<endl;
	swapInt(i3);
	cout<<i3<<" "<<g<<endl;
	return 0;
}
