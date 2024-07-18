//Write C Program to input week number (1-7) and print day of week name using switch case
#include<stdio.h>
void main()
{
	int day;
	do
	{
		printf("\nEnter the week day in num(1 to 7): ");
		scanf("%d",&day);
		switch(day)
		{
			case 1: printf("\nMonday");
				break;
			case 2: printf("\nTuesday");
				break;
			case 3:printf("\nWednesday");
			       break;
			case 4:printf("\nThursday");
			       break;
			case 5:printf("\nFriday");
			       break;
			case 6:printf("\nSaturday");
			       break;
			case 7:printf("\nSunday");
			       break;
			default:printf("\nDay is not a week day");
		}
    }while(day<=7);
}
