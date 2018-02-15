#include<stdio.h>
#define EOL '\n'
void reverse();
int main(){
		reverse();
	
	return 0;
}
void reverse(){
	
	
	char c;
	if((c=getchar()) != EOL) reverse();
	putchar(c);
	return;
}
