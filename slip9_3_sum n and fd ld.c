#include <stdio.h>

int sumOfFirstN(int N) 
{
    return (N * (N + 1)) / 2;
}

int sumOfFirstAndLastDigit(int N) 
{
    int lastDigit = N % 10;
    while (N >= 10) 
	{
        N /= 10;
    }
    int firstDigit = N;
    return firstDigit + lastDigit;
}

int main() 
{
    int choice, N ,result;

    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("***Menu***\n 1. Find sum of first N numbers\n 2. Find sum of first and last digit of number N\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) 
	{
        case 1:
            result = sumOfFirstN(N);
            printf("Sum of first %d numbers: %d\n", N, result);
            break;
        case 2:
            result = sumOfFirstAndLastDigit(N);
            printf("Sum of first and last digit of %d: %d\n", N, result);
            break;
        default:
            printf("Invalid choice. Please choose 1 or 2.\n");
    }

    return 0;
}

