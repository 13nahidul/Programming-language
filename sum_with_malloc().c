/* C program to find sum of n elements entered by user using malloc() */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    ptr = (int*) malloc(n * sizeof(int));

    // Check if memory is allocated
    if (ptr == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements of array: ");

    // Input elements and calculate sum
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);

    // Free allocated memory
    free(ptr);

    return 0;
}/* C program to find sum of n elements entered by user using malloc() */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    ptr = (int*) malloc(n * sizeof(int));

    // Check if memory is allocated
    if (ptr == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements of array: ");

    // Input elements and calculate sum
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);

    // Free allocated memory
    free(ptr);

    return 0;
}
