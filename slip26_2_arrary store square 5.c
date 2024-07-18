#include <stdio.h>

int main() 
{
    int inputArray[5] , squareArray[5],i;

    // Input 5 numbers into the array
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &inputArray[i]);
    }

    // Calculate and store the squares in another array
    for ( i = 0; i < 5; i++) 
	{
        squareArray[i] = inputArray[i] * inputArray[i];
    }

    // Display the squares
    printf("Squares of the entered numbers:\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("Square of %d is %d\n", inputArray[i], squareArray[i]);
    }

    return 0;
}

