//Write C Program to count total number of digits, even digits and odd digits in given number
#include <stdio.h>
void main()
{
	int number,digit,totalDigits=0,evenDigits=0,oddDigits=0;

	printf("Enter a number: ");
	scanf("%d",&number);

	if(number<0)
		number=-number;

	while(number>0)
	{
		digit=number%10;
		totalDigits++;

		if(digit%2==0)

			evenDigits++;
		else 
			oddDigits++;
	

	number /= 10;

      }
	printf("Total digits = %d\n",totalDigits);
	printf("Total odd digit(s) = %d\n",oddDigits);
	printf("Total even digit(s) = %d\n",evenDigits);
}
