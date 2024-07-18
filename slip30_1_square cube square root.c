#include <stdio.h>
#include <math.h>

void main()
 {
    int num;
    double square, cube, sqrtResult;

    // Input
    printf("Enter an integer: ");
    scanf("%d",&num);

    // Calculate square, cube, and square root
    square = num * num;
    cube = num * num * num;
    sqrtResult = sqrt(num);

    // Display the results
    printf("Square: %lf\n", square);
    printf("Cube: %lf\n", cube);
    printf("Square Root: %lf\n", sqrtResult);
}

