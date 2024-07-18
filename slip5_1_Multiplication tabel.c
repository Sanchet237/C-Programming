//Write a ‘C’ program to accept a number and display the first ten multiples of that number
#include<stdio.h>
void main()
{
  int i,n;
  printf("\nEnter number for multiplication table:");
  scanf("%d",&n);
  for(i=1 ; i<=10 ; i++)
    printf("\n %d X %d = %d",n,i,n*i); 
}
