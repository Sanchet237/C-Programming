#include <stdio.h>
int main() 
{
    int rows, cols ,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }

    int min = matrix[0][0];
    int max = matrix[0][0];

    for ( i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            if (matrix[i][j] < min) 
			{
                min = matrix[i][j];
            }
            if (matrix[i][j] > max) 
			{
                max = matrix[i][j];
            }
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

