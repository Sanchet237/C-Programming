#include <stdio.h>

void main()
 {
	float side1, side2, area;

	printf("Enter the length of side 1: ");
	scanf("%f", &side1);

	printf("Enter the length of side 2: ");
	scanf("%f", &side2);

	if (side1 <= 0 || side2 <= 0) 
		printf("Side lengths must be positive numbers.\n");
	else if (side1 == side2) 
	{
		printf("It's a square.\n");
		area = side1 * side2;
		printf("Area of the square: %.2f square units\n", area);
	}
	else
	{
		printf("It's a rectangle.\n");
		area = side1 * side2;
		printf("Area of the rectangle: %.2f square units\n", area);
	}


}
