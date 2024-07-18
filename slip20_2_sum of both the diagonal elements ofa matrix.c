#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("The matrix should be square (equal number of rows and columns) for diagonal sums.\n");
        return 1;
    }

    int matrix[rows][cols];
    int sum = 0;

    // Input the matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and display the sum of diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];         // Main diagonal
        sum += matrix[i][cols - i - 1];  // Anti-diagonal
    }

    printf("Sum of both diagonal elements: %d\n", sum);

    return 0;
}

