#include <stdio.h>
#include <math.h>

void main()
{
	float radius, volume;
	float const PI=3.14;
	printf("Enter the radius of the sphere: ");
	scanf("%f", &radius);

	if (radius < 0)
		printf("Invalid radius. Please enter a non-negative value.\n");

	else
	{
		volume = (4.0 / 3.0) * PI * pow(radius, 3);


		printf("The volume of the sphere with a radius of %.2f is %.2f\n", radius, volume);
	}

}
