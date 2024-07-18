#include <stdio.h>

// Function to check if a number is perfect
int is_perfect(int num) {
    int sum_of_divisors = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }

    if (sum_of_divisors == num) {
        return 1;  // The number is perfect
    } else {
        return 0;  // The number is not perfect
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        if (is_perfect(number)) {
            printf("%d is a perfect number.\n", number);
        } else {
            printf("%d is not a perfect number.\n", number);
        }
    }

    return 0;
}

