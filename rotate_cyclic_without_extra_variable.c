//rotate values cyclically without using a fourth variable.
#include <stdio.h>

void rotate(int *a, int *b, int *c) {
    *a = *a + *b + *c;   // Step 1
    *b = *a - (*b + *c); // b = old a
    *c = *a - (*b + *c); // c = old b
    *a = *a - (*b + *c); // a = old c
}

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    rotate(&a, &b, &c);

    printf("After cyclic interchange:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
