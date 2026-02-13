#include<stdio.h>
int reverse_a_num(int n)
{
    int rev=0 ,rem;
    while(n>0)
    {
       rem=n%10;
       rev=rev*10+rem;
       n/=10;
    }
    return rev;
}

int main ()
{
    int x,y;
    printf("Enter a digit: ");
    scanf("%d",&x);
    y= reverse_a_num(x);
    if (x==y) printf("Palindrome");
    else printf("Not palindrome");
}
