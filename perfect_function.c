#include<stdio.h>
int isperfect(int);
int main(){

	int n ;
	printf("Enter a number " ); scanf("%d",&n);
	int result = isperfect(n);
	if(result == 1) printf("Is perfect");
	else printf("Is not perfect");


}

int isperfect(int n){
	int i, sum= 0;
	for(i = 1; i<=n/2;i++){
		if(n%i == 0)
			sum+=i;
	}

		
	if(sum == n) return 1;
	else return 0;
	
}
