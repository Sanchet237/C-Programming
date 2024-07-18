#include <stdio.h>

void main()
{
	char alphabet;

	printf("Enter an alphabet: ");
	scanf(" %c", &alphabet);

	if ((alphabet >= 'a') && (alphabet <= 'z')) 
	{
		// Convert lowercase to uppercase
		alphabet = alphabet - 32;
		printf("Changed case: %c\n", alphabet);
	}
	else if ((alphabet >= 'A') && (alphabet <= 'Z'))
	{
		// Convert uppercase to lowercase
		alphabet = alphabet + 32;
		printf("Changed case: %c\n", alphabet);
	} 
	else

		printf("Invalid input. Please enter an alphabet.\n");
}
