#include <stdio.h>

// Recursive function to calculate x^y
long long power(int x, int y) {
    if (y == 0) {
        return 1;
    } else if (y < 0) {
        return 1.0 / power(x, -y);
    } else {
        return x * power(x, y - 1);
    }
}

int main() {
    int x, y;

    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    long long result = power(x, y);

    printf("%d^%d = %lld\n", x, y, result);

    return 0;
}

