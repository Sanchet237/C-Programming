//Write C Program to copy all elements of one array into another array using function
#include<stdio.h>
void copy(int arr[20],int n);
void main()
{
	int arr[20],n,i;
	printf("\nEnter Number of elements in the array: ");
	scanf("%d",&n);
	printf("\nEnter elements in array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	copy(arr,n);
}
void copy(int arr[20],int n)
{
	int carr[20],i;
	for(i=0;i<n;i++)
		carr[i]=arr[i];
	printf("\nArray after copying: ");
	for(i=0;i<n;i++)
		printf("%d ",carr[i]);
}
