//Write C Program to find result of following series:(x -1) + (x -2) + (x -3) + (x -4) + ……+ (x -n)
#include<stdio.h>
void main()
{
	int x,n,i,result=0;
	printf("\nEnter value of x:");
	scanf("%d",&x);
	printf("\nEnter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		result=result+(x-i);
	printf("\nResult of series (x-1)+(x-2)...(x-n):%d",result);
}
