#include <stdio.h>
#include <stdlib.h>

int add(int a,int b,int c,int d,
		int e,int f,int g,int h){
	int sum= a + b + c + d + e + f + g + h;
        return sum;
}

int main(void){
	int i=10;
	int j=20;
	int k=i+j;
	int sum = add(11,22,33,44,55,66,77,88);
	int m=k;

	return 0;
}
