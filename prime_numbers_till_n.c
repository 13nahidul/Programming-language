/*
Input a number n
Find all prime numbers ≤ n
Print them
Count how many primes there are
*/
#include <stdio.h>

int main() {
    int n, i, j, count = 0, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; // assume prime

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal prime numbers: %d\n", count);

    return 0;
}
