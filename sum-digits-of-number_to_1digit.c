#include <stdio.h>

int sumdigit(int m)
{
    int c,s=0;
    while (m>0)
    {
        c=m%10;
        s=s+c;
        m=m/10;
    }

    if (s>=10)
       {
           return sumdigit(s);  // return recursive result
       }
    else
       {
           return s;            // final single digit
       }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Summation is = %d", sumdigit(number));
    return 0;
}
