#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate combination C(n,k)
int combination(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {

        // Print spaces for triangle shape
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print Pascal values
        for (int j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
