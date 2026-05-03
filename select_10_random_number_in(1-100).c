#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int selected[10];
    int count = 0, num, i, j, isDuplicate;

    // Seed random number generator
    srand(time(0));

    while (count < 10) {
        num = rand() % 100 + 1; // Random number between 1 and 100
        isDuplicate = 0;

        // Check for duplicates
        for (i = 0; i < count; i++) {
            if (selected[i] == num) {
                isDuplicate = 1;
                break;
            }
        }

        // If not duplicate, store it
        if (!isDuplicate) {
            selected[count] = num;
            count++;
        }
    }

    // Print selected ticket numbers
    printf("Selected ticket numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", selected[i]);
    }

    return 0;
}
