#include<stdio.h>

int sumdigit(int m)
{
    int c, s=0;
    while (m>0)
    {
        c = m%10;   // got last digit
        s = s+c;   // add digit
        m = m/10;  // removed last digit
    }
    return s;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Summation is = %d", sumdigit(number));
    return 0;
}


