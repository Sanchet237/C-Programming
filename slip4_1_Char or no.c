//Accept a character from user and whether it is in uppercase or lowercase.
#include <stdio.h>
#include<ctype.h>
void main() 
{
	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (isupper(ch))
	{
		printf("The character is in uppercase.\n");
	} 
	else if (islower(ch))
	{
		printf("The character is in lowercase.\n");
	} 
	else 
	{
		printf("The character is not a letter.\n");
	}

}
