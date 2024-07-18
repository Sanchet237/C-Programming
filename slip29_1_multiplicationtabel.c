#include <stdio.h>

void main()
 {
    int num,i;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Display the table
    printf("Multiplication table for %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

   
}
