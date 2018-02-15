/*
	Author : Ashish Subedi
	Department: Computer Engineering
	Year: 1 Sem: 1

*/
#include<stdio.h>
int main(){
	int num, original_num, reversed_num = 0, remainder;
	printf("Enter a number");
	scanf("%d",&num);
	original_num = num;
	
	while(num!= 0){
		remainder = num%10;
		reversed_num = reversed_num*10+remainder;
		num/=10;
	}
	
	if(original_num == reversed_num) printf("Palindrome");
	else printf("Not palindrome");
	
	return 0;
}




