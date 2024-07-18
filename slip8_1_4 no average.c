#include<stdio.h>
void main()
{
	int a,b,c,d;
	float avg;
	printf("\nEnter 4 numbers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	avg=(float)(a+b+c+d)/4;
	printf("\nAverage of 4 numbers: %.2f",avg);
}
