#include <stdio.h>
#include<stdlib.h>
void main() {
	int m,n,i,j;

	// Accept two numbers from the user
	printf("Enter the lower bound (m): ");
	scanf("%d", &m);
	printf("Enter the upper bound (n): ");
	scanf("%d", &n);

	if (m>n) 
	{
		printf("Lower bound should be less than or equal to the upper bound.\n");
		exit(1);
	}

	printf("Numbers between %d and %d that are divisible by 3 but not by 4:\n", m, n);

	for (i=m;i<=n;i++)
	{
		if(i%3==0 && i%4!=0)
		{
			printf("%d ", i);
		}
	}

	printf("\n");
}
