#include <stdio.h>

int factorial(int n)  //factorial
{
    double f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main()
{
    int f,n,count=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    f= factorial(n);

    printf ("Factorial of %d is = %d \n",n,f);

    if (f == 0)
    {
        printf("Trailing zeros= 1\n");
        return 0;
    }
    while (f % 10 == 0)
    {
        count++;
        f = f / 10;
    }
    printf("Trailing zeros = %d\n", count);
    return 0;
}
