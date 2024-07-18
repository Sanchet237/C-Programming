#include <stdio.h>

int main() {
    char ch;

    // Accept a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a digit, lowercase alphabet, uppercase alphabet, or special symbol
    if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet.\n", ch);
    } else {
        printf("%c is a special symbol.\n", ch);
    }

    return 0;
}

