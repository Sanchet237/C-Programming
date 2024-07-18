#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 5 == 0 && number % 7 == 0) {
        printf("%d is divisible by both 5 and 7.\n");
    } else if (number % 5 == 0) {
        printf("%d is divisible by 5 but not by 7.\n");
    } else if (number % 7 == 0) {
        printf("%d is divisible by 7 but not by 5.\n");
    } else {
        printf("%d is not divisible by either 5 or 7.\n");
    }

    return 0;
}

