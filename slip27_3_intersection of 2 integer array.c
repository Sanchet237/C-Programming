#include <stdio.h>
#include<stdlib.h>
void  main()
{
	int size1, size2,i,j;

	// Input the sizes of the arrays
	printf("Enter the size of the first array: ");
	scanf("%d", &size1);
	printf("Enter the size of the second array: ");
	scanf("%d", &size2);

	if (size1 <= 0 || size2 <= 0)
	{
		printf("Array sizes must be greater than zero.\n");
		exit(1); // Exit with an error code
	}

	int arr1[size1], arr2[size2];

	// Input elements of the first array
	printf("Enter elements of the first array:\n");
	for (i = 0; i < size1; i++)
	{
		scanf("%d", &arr1[i]);
	}

	// Input elements of the second array
	printf("Enter elements of the second array:\n");
	for (i = 0; i < size2; i++)
	{
		scanf("%d", &arr2[i]);
	}

	// Find and display the intersection
	printf("Intersection of the two arrays: ");
	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++) 
		{
			if (arr1[i] == arr2[j])
			{
				printf("%d ", arr1[i]);
				break; // Break the inner loop to avoid duplicate values
			}
		}
	}
	printf("\n");

}
