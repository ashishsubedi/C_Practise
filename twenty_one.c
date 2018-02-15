#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	
	int n, previous_n = 0, computer_n= 0, result = 0, final = 0;
	printf("\t\t\tWELCOME TO TWENTY ONE\n");
	printf("How To Play: \n");
	printf("You have to start with sequence like 1, or 12 or 123. Sequence contains upto 3 consecutive number. You need to enter last number of sequnce. For example, if your sequnce is 123, you enter number 3. Computer will do the same. The one who reaches 21 loses\n ");
	
	while(final < 21){
		
		if(final== 20)printf("\nYou lose\n");
		printf("\nEnter the choice :");        scanf("%d",&n);
		if((n-final) > 3 || (n-final) < 0){
			printf("\nInvalid");
			continue;
		}
		computer_n = (4 - n);
		
		final = final + computer_n + n;
		
		printf("Computer Chooses : %d" ,final);
		
	}
	
}

