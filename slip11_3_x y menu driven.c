#include<stdio.h>
#include<stdlib.h>
void main()
{
	int ch,m,n,i,temp;
	while(1)
	{
		printf("\nEnter m");
		scanf("%d",&m);
		printf("\nEnter n");
		scanf("%d",&n);
		printf("\n1: Equality");
		printf("\n2: Less Than");
		printf("\n3: Range");
		printf("\n4:Swap");
		printf("\n5:Exit");
		printf("\nEnter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: if(m==n)
					printf("\nBoth nos are equal.");
				else
					printf("\nNot equal.");
				break;

			case 2:if(m<n)
				       printf("\nm is less than n");
				else
					printf("\nm is not less than n.");
			       break;
			case 3:if(m>=n)
				       printf("\nRange is nt proper.");
			       else
			       {
				       for(i=m;i<=n;i++)
					       printf("\n%d",i);
			       }
			       break;

			case 4:temp=m;
			       m=n;
			       n=temp;
			       printf("\nNo after swapping:  m=%d \t n=%d",m,n);
			       break;
			case 5:exit(0);
		}
	}
}	

