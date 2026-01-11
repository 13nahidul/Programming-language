#include <stdio.h>

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
       for (int space=1 ; space <= n-i; space++)
       {printf(" ");} /* to make the space  */
//this part for fibonacci series 
       int a=1, b=1, c;
       for (int j=1; j<=i; j++)
       {
        if (j==1 || j==2){printf("%d ",1);}
        else 
        {
            c=a+b;
            printf ("%d ",c);
            a=b;
            b=c;
        }
       } 
       printf("\n");
    }
    return 0; 
    
}
