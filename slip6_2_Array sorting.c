//Write user defined function to sort an input array in descending order.
#include <stdio.h>
void sort(int arr[20],int n);
void main() 
{
	int n,arr[20],i;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);

	printf("Enter %d elements:\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
        sort(arr,n);
	 printf("Sorted array in ascending order:\n");
        for (i = 0; i < n; i++)
                printf("%d ", arr[i]);

}
void sort(int arr[20],int n)
{
int i,swapped,temp;
	do {
		swapped = 0;
		for ( i = 1; i < n; i++) 
		{
			if (arr[i - 1] < arr[i]) 
			{
				temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
				swapped = 1;
			}
		}
	} while (swapped);
}
