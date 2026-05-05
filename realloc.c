/* C program using realloc() function */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i, n1, n2;

    printf("Enter size of array: ");
    scanf("%d", &n1);

    // Initial memory allocation
    ptr = (int*) malloc(n1 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }

    printf("Address of previously allocated memory:\n");
    for (i = 0; i < n1; ++i) {
        printf("%p\t", (void*)(ptr + i));
    }

    printf("\nEnter new size of array: ");
    scanf("%d", &n2);

    // Reallocating memory
    ptr = (int*) realloc(ptr, n2 * sizeof(int));

    if (ptr == NULL) {
        printf("Reallocation failed\n");
        return 0;
    }

    printf("Address of newly allocated memory:\n");
    for (i = 0; i < n2; ++i) {
        printf("%p\t", (void*)(ptr + i));
    }

    free(ptr);
    return 0;
}
