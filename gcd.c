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
/* this is your code 
int gcd(int x, int y){
	static int n = 1, ans = 1;
	if(n>small(x,y)) return ans;
	if(x%n==0 && y%n == 0){
		ans = n;	
	}
	n++;
	gcd(x,y);	
}
*/


//*************************
// here goes mine
int gcd(int a, int b){
    if(b==0) return a;
    else
    	return gcd(b, a%b);
}

//*************************

int small(int c, int d){
	return	(c<d)?c:d;
}
