#include <stdio.h>
#include<stdlib.h>
void main()
{
	int m,n,i,j,A[20][20],rowSum;

	// Accept the dimensions of the matrix
	printf("Enter the number of rows (m): ");
	scanf("%d", &m);
	printf("Enter the number of columns (n): ");
	scanf("%d", &n);

	if (m <= 0 || n <= 0)
	{
		printf("Invalid matrix dimensions. Please enter positive values for m and n.\n");
	exit(1);
	}


	// Accept the matrix elements
	printf("Enter the elements of the matrix:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++) 
		{
			printf("Enter element A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	for(i = 0; i < m; i++)
        {
                for (j = 0; j < n; j++)
                {
                        printf("%d  ",A[i][j]);
                }
	printf("\n");
        }
// Calculate and display the sum  f elements for each row
	printf("Sum of elements in each row:\n");
	for (i = 0; i < m; i++) 
	{
		rowSum = 0;
		for (j = 0; j < n; j++) 
		{
			rowSum += A[i][j];
		}
		printf("Row %d: %d\n", i + 1, rowSum);
	}

}
