#include <stdio.h>

// Function to display the count and sum of even elements
void evenStats(int arr[], int size) {
    int evenCount = 0;
    int evenSum = 0,i;

    for ( i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
            evenSum += arr[i];
        }
    }

    printf("Count of even elements: %d\n", evenCount);
    printf("Sum of even elements: %d\n", evenSum);
}

// Function to display the count and sum of odd elements
void oddStats(int arr[], int size) {
    int oddCount = 0;
    int oddSum = 0,i;

    for ( i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            oddCount++;
            oddSum += arr[i];
        }
    }

    printf("Count of odd elements: %d\n", oddCount);
    printf("Sum of odd elements: %d\n", oddSum);
}

int main() {
    int size, choice,i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d integers:\n", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Display count and sum of even elements\n");
        printf("2. Display count and sum of odd elements\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                evenStats(arr, size);
                break;
            case 2:
                oddStats(arr, size);
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

