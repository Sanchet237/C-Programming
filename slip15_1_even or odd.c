#include <stdio.h>

void main()
 {
    int num;
    // Accept an integer from the user
    printf("Enter an integer: ");
    scanf("%d",&num);
    // Check if the number is even or odd
    if(num%2==0)
         printf("%d is even.\n",num);
     else 
        printf("%d is odd.\n",num);
 }
