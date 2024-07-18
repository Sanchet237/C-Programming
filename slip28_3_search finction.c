#include <stdio.h>

// Function to search for a key in an array
int search(int array[], int n, int key) 
{
	int i;
    for ( i = 0; i < n; i++) 
	{
        if (array[i] == key) 
		{
            return i; // Key found at position i
        }
    }
    return -1; // Key not found
}

int main() {
    int n, key,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) 
	{
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    int position = search(array, n, key);

    if (position != -1) {
        printf("Key %d found at position %d.\n", key, position);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}

