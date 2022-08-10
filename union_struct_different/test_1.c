#include <stdio.h>

typedef union {
	double q;
	//int k[5];
	char c;}DATA;
typedef struct data{int a;DATA cow;} too;
int main(void){
	printf("%ld\n",sizeof(DATA));
}
