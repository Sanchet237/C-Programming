#include<stdio.h>
void main()
{
  int n;
  printf("\nEnter value of n: ");
  scanf("%d",&n);
  (n>0)?printf("\nNo is positive!"):(n==0)?printf("\nNo is Zero!"):printf("\nNo is Negative!");
}
