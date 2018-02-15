#include<stdio.h>
int main(){

	int t,a,b,i,j, num, count[100] = {0}, c = 0;
	scanf("%d",&t);
	for(i = 0 ; i < t; i++){
		scanf("%d %d", &a, &b);
		for(j = 0;j<=b; j++){
			
			num = j*j;
			if((num>=a) && (num<=b)) {
				c++;	
			}
		}
		count[i] = c;
		c= 0;
	}
	for(i = 0 ; i < t; i++){
		printf("%d\n", count[i]);
	}

}
