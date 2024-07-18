#include <stdio.h>
#include<stdlib.h>
// Function to display array elements and calculate sum and average
void displayArray(int arr[], int n) 
{
	int sum = 0,i;

	// Display array elements
	printf("Array elements: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		sum += arr[i];
	}

	// Calculate and display the sum and average
	double average = (double)sum / n;
	printf("\nSum: %d\n", sum);
	printf("Average: %.2lf\n", average);
}

void main() 
{
	int n,i;

	// Input the number of elements in the array
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	if (n <= 0) 
	{
		printf("Array size must be greater than zero.\n");
		exit(1); // Exit with an error code
	}

	int arr[n];

	// Input 'n' integers into the array
	printf("Enter %d integers:\n", n);
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &arr[i]);
	}

	// Call the displayArray function to process and display the array
	displayArray(arr, n);

}
