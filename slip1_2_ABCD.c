//Write C Program to print the following pattern
#include<stdio.h>
void main()
{
	int i,j,n;
	char ch;
	printf("\nEnter no of lines: ");
	scanf("%d",&n);
	for( i=n ; i>=1 ; i--)
	{
		ch='A';
		for(j=1;j<=i;j++)
			printf("%c\t",ch++);
		printf("\n");
	}
}
/*Enter no of lines: 4
A	B	C	D	
A	B	C	
A	B	
A	
*/
