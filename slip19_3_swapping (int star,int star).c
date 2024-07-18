#include <stdio.h>

void swap(int *a, int *b)
 {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main()
 {
    int num1, num2;

    // Accept two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function to interchange the values
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
}
