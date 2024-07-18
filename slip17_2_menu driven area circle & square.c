#include <stdio.h>
#include <math.h>



int main() {
    int choice;
    double radius, side, area,PI =3.14;

    do {
        printf("Menu:\n");
        printf("1. Calculate the area of a circle\n");
        printf("2. Calculate the area of a square\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                if (radius >= 0) {
                    area = PI * pow(radius, 2);
                    printf("Area of the circle: %.2lf\n", area);
                } else {
                    printf("Radius should be a non-negative number.\n");
                }
                break;
            case 2:
                printf("Enter the side length of the square: ");
                scanf("%lf", &side);
                if (side >= 0) {
                    area = pow(side, 2);
                    printf("Area of the square: %.2lf\n", area);
                } else {
                    printf("Side length should be a non-negative number.\n");
                }
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

