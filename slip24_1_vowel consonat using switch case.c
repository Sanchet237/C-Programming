#include <stdio.h>

void main()
{
	char ch;

	// Input a character
	printf("Enter a character: ");
	scanf(" %c", &ch);

	// Convert the character to uppercase for easier comparison
	switch (toupper(ch))
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("%c is a Vowel.\n", ch);
			break;
		default:
			if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
				printf("%c is a Consonant.\n", ch);
			else 
				printf("%c is not a valid alphabet character.\n");
			break;
	}

}
