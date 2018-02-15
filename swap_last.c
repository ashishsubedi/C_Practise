#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i, temp;
	printf("Enter the number of digits: " );
	scanf("%d",&n);
//	int *c  = (int*)malloc(n*sizeof(n));
	int c[20];
	int a;
	
	printf("Enter the number : " );
	scanf("%d",&a);
	for(i = n-1; i>=0; i--){
		//*(c+i) = a%10;
		
		c[i] = a%10;
		a/=10;
		
	}
	temp = c[n-1];
	c[n-1] = c[0];
	c[0] = temp;
	
	printf("Enter the number : " );
	for(i = 0; i<n; i++){
		//*(c+i) = a%10;
		printf("%d",c[i] );
	}
	
//	free(a);
	return 0;
}
