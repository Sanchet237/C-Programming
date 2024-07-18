#include <stdio.h>

// Function to print the Fibonacci series
void printFibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        printFibonacci(n - 1, b, a + b);
    }
}

int main() {
    int n;

    printf("Enter the number of terms to print in the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. The number of terms should be a positive integer.\n");
        return 1;
    }

    printf("Fibonacci series (first %d terms): ", n);
    if (n >= 1) {
        printf("0 ");
    }
    if (n >= 2) {
        printf("1 ");
    }

    printFibonacci(n - 2, 0, 1);

    printf("\n");

    return 0;
}

