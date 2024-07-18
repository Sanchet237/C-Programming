#include <stdio.h>
#include<stdlib.h>
void main() 
{
	int n,i,arr[20];

	// Accept the number of integers from the user
	printf("Enter the number of integers: ");
	scanf("%d",&n);

	if (n <= 0)
	{
		printf("Invalid array size. Please enter a positive integer.\n");
		exit(1);
	}


	// Read integers into the array
	printf("Enter %d integers:\n", n);
	for (i=0;i<n;i++)
	{
		printf("Enter element %d: ",i + 1);
		scanf("%d",&arr[i]);
	}

	// Display alternate elements
	printf("Alternate elements of the array:\n");
	for (i=0;i<n;i+=2) 
		printf("%d ", arr[i]);

	printf("\n");
}
