#include <stdio.h>

int main() {
    int array[10];
    int evenSum = 0,i;
    int oddSum = 0;

    // Input 10 integers into the array
    printf("Enter 10 integers:\n");
    for ( i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Display the sum of elements at even subscript positions\n");
        printf("2. Display the sum of elements at odd subscript positions\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                evenSum = 0;
                for ( i = 0; i < 10; i += 2) {
                    evenSum += array[i];
                }
                printf("Sum of elements at even positions: %d\n", evenSum);
                break;

            case 2:
                oddSum = 0;
                for (i = 1; i < 10; i += 2) {
                    oddSum += array[i];
                }
                printf("Sum of elements at odd positions: %d\n", oddSum);
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

