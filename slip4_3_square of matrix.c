//Write C Program to find and store square of each element of one matrix into other matrix
#include <stdio.h>
int main() 
{
    int r,c,i,j;
    int a[100][100],sq[100][100];
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            sq[i][j] = a[i][j] * a[i][j];
        }
    }
    
    printf("Original Matrix:\n");
    for (i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix with Squares:\n");
    for ( i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            printf("%d\t", sq[i][j]);
        }
        printf("\n");
    }

    return 0;
}

