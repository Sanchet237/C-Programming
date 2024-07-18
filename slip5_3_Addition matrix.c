//addition matrixs 
#include <stdio.h>
int main() 
{
    int r,c,i,j;
    int a[100][100], b[100][100], sum[100][100];
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of the first matrix:\n");
    for ( i = 0; i < r; i++)
	{
        for ( j = 0; j < c; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            scanf("%d", &b[i][j]);
        }
    }

    for ( i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Result of Matrix Addition:\n");
    for ( i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

