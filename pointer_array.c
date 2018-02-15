#include<stdio.h>
#define ROWS 4
#define COLS 3
int main ()
{
    // declare 4x3 array
    int matrix[ROWS][COLS] = {{1, 2, 3}, 
                              {4, 5, 6}, 
                              {7, 8, 9}, 
                              {10, 11, 12}}; 
 
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
