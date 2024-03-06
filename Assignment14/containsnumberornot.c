// Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>
#include <conio.h>
int contain(int n , int d)
{
    int r;
    while (n > 0)
    {
        r = n % 10;
        if (r == d)
        return 1;
        n = n/10;
    }
    return 0;
}


void main()
{
    int n,d,i;
    printf("Enter the Number : ");
    scanf("%d",&n);
    printf("Enter the digit :");
    scanf("%d",&d);
    i = contain(n,d);
    if (i == 1)
    {
        printf("contains");
    }
    else
    {
        printf("does not contains");
    }

}