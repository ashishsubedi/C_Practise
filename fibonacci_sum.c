#include<stdio.h>
#include<math.h>
int dude(int n);
int main(){

	int i,j,sum=0,a = -1, b =1,temp;
	for(i = 0; i<7; i++){
		temp = a; 
		a = b; 
		b= a + temp;

		sum += b;
	}
		printf(" Sum : %d ", sum);	
	return 0;
}

