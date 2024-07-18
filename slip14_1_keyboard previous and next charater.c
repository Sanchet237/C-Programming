#include <stdio.h>

void main()
 {
    char inputChar,prevChar,nextChar;

    // Accept a character from the user
    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    // Calculate the previous and next characters
     prevChar = inputChar - 1;
     nextChar = inputChar + 1;

    // Display the result
    printf("You entered: %c\n", inputChar);
    printf("Previous character: %c\n", prevChar);
    printf("Next character: %c\n", nextChar);
}
