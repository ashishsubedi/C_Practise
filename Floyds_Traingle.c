#include<stdio.h>
int main(){
	
	int i , j , space, rows, count= 1;
	scanf("%d",&rows);
	space = rows;
	for(i = 0; i< rows; i++){
	
		//for( j = space; j >space; j--){
		//	printf(" ");
		//}
		for(j = 0; j<i; j++){
			printf("%d",count++);
		}

		space--;
		printf("\n");
	}
	
	
}
