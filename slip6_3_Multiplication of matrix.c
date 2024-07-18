//Write C program to find multiplication of two matrices.
#include <stdio.h>

void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int m, n, p; // Dimensions of the matrices
    int mat1[100][100], mat2[100][100], result[100][100];

    printf("Enter the number of rows and columns for the first matrix (m and n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns for the second matrix (n and p): ");
    scanf("%d %d", &n, &p);

    // Input the elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiply the matrices
    multiplyMatrices(mat1, mat2, result, m, n, p);

    // Display the result
    printf("Resultant Matrix (Product of the two matrices):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

