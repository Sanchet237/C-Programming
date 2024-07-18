#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
