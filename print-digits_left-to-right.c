#include <stdio.h>
int main()
{
    int n,b, divisor = 1, digit;
    printf("Enter a number: ");
    scanf("%d", &n);

    b=n;
    while (b>10)
    {
        divisor*=10;
        b=b/10;
    }

    while(divisor>0)
    {
        digit=n/divisor;
        printf("%d ", digit);
        n=n%divisor;
        divisor=divisor/10;
    }


}
