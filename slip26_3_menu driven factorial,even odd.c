#include <stdio.h>

// Function to calculate the factorial of a number using recursion
long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number, choice;

    do {
        printf("Menu:\n");
        printf("1. Display the factorial of a number\n");
        printf("2. Check if the number is even or odd\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);
                if (number < 0) {
                    printf("Factorial is not defined for negative numbers.\n");
                } else {
                    printf("Factorial of %d is %lld\n", number, factorial(number));
                }
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &number);
                if (number % 2 == 0) {
                    printf("%d is even.\n", number);
                } else {
                    printf("%d is odd.\n", number);
                }
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

