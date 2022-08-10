#include <stdio.h>

int main(void){
	int s;
	double f;
	double *p;

	printf("%d     %d\n",(int*)(&s+1),(int*)(&s));
	printf("%d     %d\n",(int*)(&f+1),(int*)(&f));
	printf("%d     %d\n",(int*)(&p+1),(int*)(&p));

	return 0;
}
