//Write C Program to check given number is positive or negative using ternary operator
#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter value of n: ");
	scanf("%d",&n);
	(n>0)?printf("\nNo is Positive!"):printf("\nNo is Negative!");
}
