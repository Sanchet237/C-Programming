#include <stdio.h>

void main()
 {
    int x,y,integer_division,remainder;
    float exact_division;
    
    // Accept two numbers from the user
    printf("Enter the first number (X): ");
    scanf("%d", &x);
    
    printf("Enter the second number (Y): ");
    scanf("%d", &y);
    
    // Perform integer division
    integer_division = x / y;
    
    // Perform exact division
     exact_division = (float)x / y;
    
    // Find the remainder
    remainder = x % y;
    
    // Display the results
    printf("Integer Division: %d\n", integer_division);
    printf("Exact Division: %.2f\n", exact_division);
    printf("Remainder: %d\n", remainder);
    
}
