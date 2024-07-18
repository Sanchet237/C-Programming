#include <stdio.h>

void main() 
{
    int numArray[10],i;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numArray[i]);
    }

    printf("Even integers in the array:\n");
    for (i = 0; i < 10; i++) 
    {
        if (numArray[i] % 2 == 0)
                printf("%d\n", numArray[i]);
        
    }
}
