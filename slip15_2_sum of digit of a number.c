#include <stdio.h>

int main() {
    int number, originalNumber, remainder, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        originalNumber = number; // Store the original number for later display

        // Calculate the sum of digits
        while (number != 0) {
            remainder = number % 10;
            sum += remainder;
            number /= 10;
        }

        printf("The sum of digits of %d is %d.\n", originalNumber, sum);
    }

    return 0;
}

