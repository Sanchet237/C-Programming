//Write C Program to find roots of quadratic equation Ax^2 + B^x + C.
#include <stdio.h>
#include <math.h>
int main() 
{
    double A, B, C;
    double d, r1, r2;
    printf("Enter the coefficients A, B, and C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    d = B * B - 4 * A * C;

    if (d > 0)
	{
        r1 = (-B + sqrt(d)) / (2 * A);
        r2 = (-B - sqrt(d)) / (2 * A);
        printf("Two real roots: %.2lf and %.2lf\n", r1, r2);
    } 
	else if (d == 0) 
	{
        r1 = -B / (2 * A);
        printf("Two identical real roots: %.2lf\n", r1);
    } 
	else 
	{
        double realPart = -B / (2 * A);
        double imaginaryPart = sqrt(-d) / (2 * A);
        printf("complex roots \n r1 = %.2lf + %.2lfi \n r2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    return 0;
}

