#include <stdio.h>
int main() 
{
    int decimalNumber, quotient;
    int octalNumber[100]; 
    int i = 0,j;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    quotient = decimalNumber;

    while (quotient != 0) 
	{
        octalNumber[i] = quotient % 8;
        quotient = quotient / 8;
        i++;
    }

    printf("Octal equivalent: ");
    for ( j = i - 1; j >= 0; j--) 
	{
        printf("%d", octalNumber[j]);
    }

    printf("\n");

    return 0;
}

