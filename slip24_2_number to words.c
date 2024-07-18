#include <stdio.h>

// Function to convert a digit to its word representation
void digitToWord(int digit) {
    switch (digit) {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
    }
}

// Function to convert a number to words
void numberToWords(int number) 
{
    if (number >= 10) 
	{
        numberToWords(number / 10);
    }
    digitToWord(number % 10);
}

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) 
	{
        printf("Negative numbers are not supported.\n");
        return 1;
    }

    if (number == 0) 
	{
        printf("zero\n");
    } 
	else 
	{
        printf("Number in words: ");
        numberToWords(number);
        printf("\n");
    }

    return 0;
}

