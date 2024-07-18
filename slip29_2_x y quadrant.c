#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    int choice;

    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    do {
        printf("\nMenu:\n");
        printf("1. Calculate the distance between points\n");
        printf("2. Check if points are in the same quadrant\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
                    printf("Distance between the points: %.2lf\n", distance);
                }
                break;

            case 2:
                if ((x1 > 0 && x2 > 0) || (x1 < 0 && x2 < 0)) {
                    if ((y1 > 0 && y2 > 0) || (y1 < 0 && y2 < 0)) {
                        printf("The points are in the same quadrant.\n");
                    } else {
                        printf("The points are not in the same quadrant.\n");
                    }
                } else {
                    printf("The points are not in the same quadrant.\n");
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

