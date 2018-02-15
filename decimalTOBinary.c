#include<stdio.h>
void main(){

	int a , i;
	int b[16] ; char redo;
	do{
		printf("Enter a decimal number : \n");
		scanf(" %d",&a);
		
		for(i=0;i<16;i++){
			b[15-i] = a%2;
			a/=2;
			
		}
		for(i=0;i<16;i++){
			printf("%d",b[i]);
		}
		printf("\nDo you wanna try again? [y/n]\n");
		scanf(" %c",&redo);
	
		
	}while( redo == 'y' && a != '\n');
	
}
