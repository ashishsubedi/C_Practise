#include<stdio.h>
int main(){
	int i,j,k;
	int space = 5;
	

	for(j=1;j<=5;j++){
		for(i=0;i<=space;i++){
			printf(" ");
		}
		for(k=0;k<(2*j-1);k++){
			printf("*");
		}
		printf("\n");
		space--;
	}

}

