#include <stdio.h>

struct point{
	double x;
	double y;
};

double abscissa(struct point *p){
	return p->x;
}

int main(){
	struct point p1={2,3.14};
	printf("%f\n",abscissa(&p1));
	return 0;
};
