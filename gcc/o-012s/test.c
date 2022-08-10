void f(void);

__attribute__((noinline)) int  main(){
	int a=1;
	//int a=3;
	if(a>2)
		f();
}

