#include<stdio.h>
#include<math.h>
int main(){

	int t,a,b,i,j, num, count[100] = {0}, c = 0;
	scanf("%d",&t);
	for(i = 0 ; i < t; i++){
		scanf("%d %d", &a, &b);
		if(a<0 || b<0){
			printf("\n");
			continue;
			
		}
		for(j = a;j<=b; j++){
			
			num = (int)sqrt(j);
			if((num*num) == j) {
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
