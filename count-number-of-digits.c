#include <stdio.h>

int main()
{

    int a, count = 0;

    printf("Input a digit: ");
    scanf("%d", &a);

    while (a > 0)
    {
        a = a / 10;
        count++;
    }

    printf("Number of digits: %d", count);

    return 0;
}
