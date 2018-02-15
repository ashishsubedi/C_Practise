#include<stdio.h>
void fib(int a, int b);

int n= 0;
int main(){
	int a = -1, b = 1;
	printf("Enter the number : "); scanf("%d",&n);
	fib(a,b);
	return 0;
}
void fib(int a, int b){
	static int _n;
	if(n == _n) return;
	printf("%d ", b+a);
	_n++;
	fib(b,b+a);
	
}
