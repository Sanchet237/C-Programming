#include <stdio.h>

void main()
 {
    int number,i;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display the first ten multiples
    printf("The first ten multiples of %d are:\n", number);
    for (i = 1; i <= 10; i++)
 
        printf("%d x %d = %d\n", number, i, number * i);

}
