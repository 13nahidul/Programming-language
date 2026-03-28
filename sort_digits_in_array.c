/*a program in c language to sort a number array,
which can give a digit at a specific position of the array*/
#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp, pos;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Show sorted array
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    // Input position
    printf("\nEnter position (1 to %d): ", n);
    scanf("%d", &pos);

    // Check valid position
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        printf("Element at position %d = %d\n", pos, arr[pos - 1]);
    }

    return 0;
}
