#include<stdio.h>
int main(){
	
	int i , j , space, rows, count= 0, flag = 0;
	scanf("%d",&rows);
	space = rows;
	for(i = 0; i< rows; i++){
	
		for( j = 1; j < space; j++){
			printf(" ");
		}
		for(j = 0; j<2*i+1; j++){
			if(count < 2*i+1 && flag == 0) count++;// If once entered into else condition meaning it is decreasing
			else {count--;
			flag = 1;//Setting flag to true so that it has already entered this part and the numers is decreasing
			}
			printf("%d",count);
		}
		flag = 0;
		space--;
		printf("\n");
	}
	
	
}
