#include <stdio.h>
int main()
{
    int a, rem;

    printf("Input a digit: ");
    scanf("%d", &a);

    while (a > 0)
    {
        rem = a % 10;
        printf("%d ", rem);
        a = a / 10;
    }

    return 0;
}
