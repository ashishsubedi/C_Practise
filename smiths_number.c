#include<stdio.h>

//This algorithm not done by me. I copied this algorithm.
int main(){
	
	long int a = 0, i,n,b = 0,result = 0,temp;
	scanf("%ld",&n);
	temp = n;
	while(temp != 0){
		a += temp%10;
		temp/= 10;
	}
	for(i = 2; i<=n; i++){
		if(n%i==0){
			n/= i;
			
			temp = i;
			while(temp != 0){
				
				b += temp % 10;
				temp /= 10;
			}
			i = 1;
		}
	
	
	}
	
	if(b == a){
		result = 1;
	}
	else 
		result = 0;
	
	printf("%ld",result);
	
	
	
	return 0;
}


