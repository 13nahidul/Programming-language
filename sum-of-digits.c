#include<stdio.h>

int sum_of_digits(int x)
{
    int rem,sum=0,y;
    while (x>0)
    {
        rem=x%10;
        sum=sum+rem;
        x=x/10;
    }
    if (sum>=10)
    {
        sum= sum_of_digits(sum);
    }
    else return sum;
}

int main ()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum= sum_of_digits(n);
    printf("Summation: %d",sum);
    return 0;
}
