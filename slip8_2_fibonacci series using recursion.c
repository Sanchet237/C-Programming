//Write C Program to print Fibonacci Series using Recursion
#include <stdio.h>
int fibonacci(int n) 
{
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}
void  main()
{
	int n,i;
	printf("Enter the number of terms for the Fibonacci series: ");
	scanf("%d",&n);

	if (n < 0)
		printf("Please enter a non-negative number.\n");
	else 
	{
		printf("Fibonacci Series up to %d terms:\n", n);
		for (i=0;i<n;i++) 
			printf("%d ",fibonacci(i));
		printf("\n");
	}
}
