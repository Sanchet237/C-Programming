#include <stdio.h>

void main()
{
	int numArray[5],i,j;
	int squareArray[5];

	// Input phase
	printf("Enter 5 numbers:\n");
	for (i=0;i<5;i++)
	{
		printf("Enter number %d: ",i + 1);
		scanf("%d",&numArray[i]);
	}

	// Calculate squares and store in squareArray
	for (i=0;i<5;i++)

		squareArray[i] = numArray[i] * numArray[i];

	// Display the squares
	printf("\nSquares of the entered numbers:\n");
	for (i=0;i<5;i++)
		printf("Square of %d is %d\n", numArray[i], squareArray[i]);
}
