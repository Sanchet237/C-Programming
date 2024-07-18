#include <stdio.h>

int main() {
    int rows, cols ,i,j;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array to store the matrix
    int matrix[rows][cols];

    // Input the matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize variables to hold the minimum and maximum values
    int min = matrix[0][0];
    int max = matrix[0][0];

    // Find the minimum and maximum values in the matrix
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

    // Print the minimum and maximum values
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

