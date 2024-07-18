/*Write a menu driven program to perform the following operations on a character type variable without using standard library functions
i. Convert it to uppercase
ii. Convert it to lowercase*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int ch;
	char character;
	while(1)
	{
		printf("\nEnter the Character: ");
		scanf(" %c",&character);
		printf("\n 1: Convert it to lowercaes \n 2: Convert it to Uppercase \n 3: Exit");
		printf("\nEnter the choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: if(character>='A' && character<='Z')
					printf("Character after converting into lowercase: %c",character+32);
				else
					printf("\nCharacter is in Lowercase."); 
				break;
			case 2: if(character>='a' && character<='z')
					printf("Character after converting into Uppercase: %c",character-32);
				else
					printf("\nCharacter is in Uppercase.");
				break;
			case 3: exit(1);
		}
	}
}
