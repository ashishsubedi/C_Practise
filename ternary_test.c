#include<stdio.h>
int main(){
	int a= 5, b=6, c = 10,d = 1, ans= 0;
	ans = (a>b)?a:(c>b)?c:(b>d)?b:d;
	printf("%d",ans);
	
	return 0;
}
