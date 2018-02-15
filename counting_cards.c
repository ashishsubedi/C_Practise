/*
	Author : Ashish Subedi
	
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0


int isVowel(char);//Function prototype
int isEven(int);

int main(){

	char n[20] = {'\0'}; int count = 0,i, length = 0;//character array of length 20. initializin to null.
	printf("Enter the things you see \n");
	scanf("%s",n);//Storing everything as character array.
	
	for(i = 0; n[i] != '\0'; i++){//getting total number of character input by user. Looping till the null is reached and
		length++;			//increasing value of lenght by 1
	}
	
	for(i = 0; i<length;i++){//Run till index is less than total number of character
		if( isVowel(n[i]) == TRUE){//if it is vowel, increase the count
			
			count++;
			
		}		
		
		if(isEven((int)n[i]) == FALSE){//if it is odd increase the count
				count++;
							
		}
	}
	
}
int isVowel(char a){
	if((a == 'a' ||a == 'e' ||a == 'i' ||a == 'o' ||a == 'u'))// if vowel
	return TRUE;
	else return FALSE;
}
int isEven(int a){
	if(a%2 == 1 && a<65)// if remainder is 1 and checking if input is not character. if it's letter, it will return true that doesnot make sense but we only need to know if it's odd or not so who cares.
	return FALSE;
	else return TRUE;
}

