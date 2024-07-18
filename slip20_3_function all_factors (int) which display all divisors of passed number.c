#include <stdio.h>

void  all_factors(int num)
   {
  int i;
    printf("All divisors of %d are: ", num);
    
    for (i = 1; i <= num; i++)
{
        if (num % i == 0) 
            printf("%d ", i);
        
    }
    
    printf("\n");
}

void  main() {
    int num;

    // Accept a number from the user
    printf("Enter a number: ");
    scanf("%d",&num);

    // Call the function to display all divisors
    all_factors(num);
}
