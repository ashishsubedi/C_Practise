#include<stdio.h>
void  transpose(int matrix[][20],int n);
int main(){
	int n = 3;
	//scanf("%d",&n);
	int a[20][20];
	int i,j;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &a[i][j]);
		}
		
	}
	transpose(a,n);

	printf("The transpose matrix is \n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void transpose(int matrix[][20],int n){
	int i,j;
	int b[20][20];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			b[j][i] = matrix[i][j];
			printf("%d  %d\n", b[j][i], matrix[i][j]);
		}
		
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			matrix[i][j] = b[i][j];
		}
		
	}

}