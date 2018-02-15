#include<stdio.h>

int factorial(int n){
	int i, f= 1;
	for(i = 1;i<=n; i++)
		f *= i;
	return f;

}

void main(){

	int num, space, i,j;
	
	scanf("%d",&num);
	space = num;
	
	for(i = 0; i <num; i++){
		for( j = 0; j < space; j++){
			printf(" ");
		}
		for(j = 0;j <= i; j++){
			printf("  %d ", factorial(i) /(factorial(i-j)*factorial(j)));
			
		}
		
		printf("\n");
		space--;
		
	
	}	
	
	
}
