//Write C Program to check whether given character is vowel or consonant
#include<stdio.h>
void main()
{
	char ch;
	printf("\nEnter the character: ");
	scanf(" %c",&ch);
	if(ch=='A'||ch=='a'|| ch=='E'|| ch=='e'|| ch=='I'|| ch=='i'|| ch=='O'|| ch=='o'|| ch=='U'|| ch=='u')
		printf("\nCharacter is a Vowel.");
	else
		printf("\nCharacter is consonent.");
}
