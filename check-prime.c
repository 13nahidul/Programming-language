#include<stdio.h>
#include<math.h>
int check_prime(int x)
{
    if (x<=1) return 0;
    for (int i=2; i<=sqrt(x); i++)
    {
        if (x%i==0) return 0;
    }
    return 1;
}
int main ()
{
    int n,check;
    printf("Enter a number: ");
    scanf("%d",&n);
    check= check_prime(n);
    if (check==0)printf("Not prime");
    else printf("It's prime");
}
