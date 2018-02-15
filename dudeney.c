#include<stdio.h>
#include<math.h>
int dude(int n);
int main(){

	int n;// defining the n variable
	printf("Enter a number : ");scanf("%d",&n);
	if(dude(n) == 1) printf("It is dudeney number");
	else printf("It is not dudeney number");
	
	return 0;
}
int dude(int n){

	int i,sum= 0, num;
	num= n;				// setting the copy of original number 
	while(num!= 0){
		sum += num % 10;	// adding remainder to sum variable to get sum of each digit of original number
		num/= 10;			// dividing the number by 10 so removing the ones place digit
		
	}
	if((sum*sum*sum) == n) return 1;	// if cube of sum of digits of original number equals original number return 1
	else return 0;
}
