#include <stdio.h>
#include <ctype.h> // for isalpha and isdigit functions

int main() {
    char ch;
    int alphabetCount = 0;
    int digitCount = 0;

    printf("Enter characters. Enter '$' to end.\n");

    while (1) {
        printf("Enter a character: ");
        scanf(" %c", &ch); // Leading space in format string to consume whitespace characters

        if (ch == '$') {
            break; // Exit the loop when '$' is entered
        }

        if (isalpha(ch)) {
            alphabetCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        }
    }

    printf("Total alphabets entered: %d\n", alphabetCount);
    printf("Total digits entered: %d\n", digitCount);

    return 0;
}

