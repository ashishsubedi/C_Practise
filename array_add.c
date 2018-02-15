#include<stdio.h>
void  add(int a[][20],int b[][20], int m);
int main(){
	int n = 3,m = 3;
	//scanf("%d",&n);
	int a[20][20], b[20][20];
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &a[i][j]);
		}
		
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			scanf("%d", &b[i][j]);
		}
		
	}
	add(a,b,m);
	
	return 0;
}
void  add(int a[][20],int b[][20], int m){
	
	int i,j;
	int add[20][20];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			add[i][j] = a[i][j] + b[i][j];
			
		}
		
	}
	printf("The added matrix is \n");
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			printf("%d\t", add[i][j]);
		}
		printf("\n");
	}

}