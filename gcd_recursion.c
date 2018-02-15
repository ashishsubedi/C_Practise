/*
	Author :  Ashish Subedi
	Department: C.E.
	FYI, I did this in 1st try :)

*/

#include<stdio.h>
int gcd(int, int);
int small(int, int);
int main(){
	
	int a,b,g;
	scanf("%d%d",&a,&b);
	g = gcd(a,b);
	printf("%d",g);

}

int gcd(int x, int y){
	static int n = 1, ans = 1;
	if(n>small(x,y)) return ans;
	if(x%n==0 && y%n == 0){
		ans = n;	
	}
	n++;
	gcd(x,y);	
}


int small(int c, int d){
	return	(c<d)?c:d;
}
