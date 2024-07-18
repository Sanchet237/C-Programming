#include <stdio.h>

// Function to find the maximum element in a matrix
int max_ele(int matrix[][100], int rows, int cols) 
{
    int max = matrix[0][0];

    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            if (matrix[i][j] > max) 
			{
                max = matrix[i][j];
            }
        }
    }

    return max;
}

int main() 
{
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array to store the matrix
    int matrix[100][100];

    // Input the matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the maximum element in the matrix using the max_ele function
    int maximum = max_ele(matrix, rows, cols);

    // Print the maximum element
    printf("Maximum element in the matrix: %d\n", maximum);

    return 0;
}

