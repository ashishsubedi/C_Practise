/*
	Author : Ashish Subedi
	Department: Computer Engineering
	Year: 1 Sem: 1

*/
#include<stdio.h>
int main(){
	int max_char = 25,i, count= 0;//max_char is the max number of charcter you can input, count is explained later
	char name[max_char];

	printf("Enter string: \n ");
	scanf("%s",name);// Gets input of a string
	
	for(i= 0; i<max_char;i++){
		if(name[max_char-i] == '\0') {count++;continue;}//Checking from back of array, if the character is null, restart the loop again. Count keeps count of how many times has the loop been continued.
		
		if(name[i-count] != name[max_char-i]){//i-count makes array start from index 0. max_char-i checks from last position where character starts.
		//If the characters doesnot match, it directly exits the loop showing that result isn't a palindrome.
			printf("The string %s is not a palindrome\n",name);
			break;
		}
		//if the loop has been completely run, then it shows that the numebr is palindrome
		if(i == max_char-1) printf("The string %s is a palindrome\n",name);
	}
	return 0;
	
	
}




