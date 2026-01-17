#include <stdio.h>
double factorial(int n)
{
    double f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}
double power(double x, int n)
{
    double p = 1;
    for (int i = 1; i <= n; i++)
        p *= x;
    return p;
}

int main()
{
    double x, sum = 0, term;
    int i, p;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    for (i = 0; i < 10; i++)
    {
        p = 2 * i + 1;
        term = power(x,p)/factorial(p);

        if (i%2==0)
            sum+=term;
        else
            sum-=term;
    }

    printf("sin(%lf) = %lf\n", x, sum);

    return 0;
}
