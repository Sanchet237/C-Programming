#include <stdio.h>

int main() {
    int n,i;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. The number of elements should be a positive integer.\n");
        return 1;
    }

    int arr[n];

    // Input the elements
    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the alternate elements
    printf("Alternate elements of the array: ");
    for ( i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

