//Write user defined function count_zero (int[][],int) which will count all zeros of input matrix.
#include<stdio.h>
void count(int a[20][20],int m,int n);
void main()
{
	int a[20][20],r,c,i,j;
	printf("\nEnter no.of rows and column : ");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
 		{
			printf("\nEnter the element at [%d][%d] position : ",i,j);
			scanf("%d",&a[i][j]);
		}
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
    count(a,r,c);
}

void count(int a[20][20],int r,int c)
{
   int i,j,cntzero=0;
   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
		{
			if(a[i][j]==0)
			cntzero++;
		}
	}
	printf("\nNumber of Zero in input matri: %d",cntzero);
}
