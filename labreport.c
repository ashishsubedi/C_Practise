
/*
	Author: Ashish Subedi
*/
#include<stdio.h>

void main(){
	
	int num, sum = 0,i=0, input;
	float percent;

	printf("Enter the number of subjects : ");
	scanf("%d",&num);
	
	while(i<num){
	
		scanf("%d",&input);
		sum += input;
		i++;
			
	}
	percent= 1.0* sum/num;
	printf("Your percentage is %f ",percent);
	
}
