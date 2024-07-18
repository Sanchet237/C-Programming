#include <stdio.h>
// Function to convert a decimal number to binary
void decimal_Binary(int d) 
{
    if (d> 0) 
	{
        decimal_Binary(d / 2);
        printf("%d", d % 2);
    }
}

int main() 
{
    int d;
    printf("Enter a decimal number: ");
    scanf("%d", &d);

    if (d < 0) 
	{
        printf("Binary representation is not valid for negative numbers.\n");
    } 
	else if (d == 0) 
	{
        printf("Binary representation: 0\n");
    } 
	else 
	{
        printf("Binary representation: ");
        decimal_Binary(d);
        printf("\n");
    }
    return 0;
}

