#include <stdio.h>

int main(void){
	struct data_struct{
		char a;
		short b;
		int c;
		long d;
		//输出结果位40，因为下面的double占用8字节，起始地址要对齐，所以e后面的4个字节没有被使用
		float e;
		double g;
		char *h;
	};
	union data_union{
		//char a;
		//short b;
                //int c;
                //long d;
                float e;
                //double g;
                //char *h;
	};

	struct data_struct aa;
	union data_union bb;

	printf("struct size:%ld\n",sizeof(aa));
	printf("union  size:%ld\n",sizeof(bb));
	
	return 0;
}
