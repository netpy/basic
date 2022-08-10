#include <stdio.h>
#include <string.h>
int main(void){
	printf("strlen:%ld\t sizeof:%d\t\n",strlen("123\0 123"),sizeof("123\0 123"));

	int a;
	printf("%d\n",sizeof a);
	return 0;
}
