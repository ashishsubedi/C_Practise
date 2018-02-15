#include<stdio.h>
int gcd(int, int);
int small(int,int);
int main(){
	
	int a,b,g;
	scanf("%d%d",&a,&b);
	g = gcd(a,b);
	printf("%d",g);

}
int gcd(int x, int y){
	int i, z = 0;
	for(i=1;i<=small(x,y);i++){
		if(x%i==0 && y%i==0) z = i;
	}
	return z;
}
int small(int c, int d){
	return	(c<d)?c:d;
}
