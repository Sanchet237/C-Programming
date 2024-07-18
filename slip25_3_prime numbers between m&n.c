#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) 
{
	int i;
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for ( i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n,i;

    printf("Enter two numbers (m and n): ");
    scanf("%d %d", &m, &n);

    if (m > n) {
        printf("Invalid input: m should be less than or equal to n.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are:\n", m, n);
    for ( i = m; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

