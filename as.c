#include<stdio.h>
void one();
void two();
void three();
void one(){
	two();
	putchar('A');
}
void two(){
	putchar('E');
	putchar('P');
}

void three(){
	one();
}
void fun( int x){
	x = 3*x;
}
void main(){
	/*putchar('N');
	three();
	putchar('L');*/
	
	//int b =3+ 2 * 4 % 3;
	//printf("%d", b);
	int x = 3;
	fun(x);
	printf("%d",x);

}

