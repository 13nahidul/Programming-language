#include <stdio.h>
int dec_bin (int number)
{
    int remainder, binary, place;
    place=1;
    binary=0;
    if (number == 0)
    {
        return 0;
    }
    else
    {
        while(number>0)
        {
            remainder= number%2;
            binary= binary+ remainder*place;
            place= place*10;
            number = number/2;
        }
    }
    return binary;
}
int main ()
{
    int y;
    printf ("Enter a decimal umber: ");
    scanf("%d", &y);
    printf ("Binary number= %d",dec_bin (y));

}
