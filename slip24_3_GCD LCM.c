#include <stdio.h>

// Function to calculate GCD of two numbers using Euclidean algorithm
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM of two numbers
int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}

int main() {
    int num1, num2;
    int choice;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    do {
        printf("\nMenu:\n");
        printf("1. Calculate the GCD of the numbers\n");
        printf("2. Calculate the LCM of the numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("GCD of %d and %d is %d\n", num1, num2, calculateGCD(num1, num2));
                break;
            case 2:
                printf("LCM of %d and %d is %d\n", num1, num2, calculateLCM(num1, num2));
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

