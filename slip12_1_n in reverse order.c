#include <stdio.h>
void main()
 {
    int n,i;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("The first %d numbers in reverse order are:\n", n);
    for(i=n;i>=1;i--)
        printf("%d ",i);

    printf("\n");
}

