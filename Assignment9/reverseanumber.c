//Write a program to reverse a given number
#include <stdio.h>
#include <conio.h>
void main ()
{
    int n,x,y,z = 0;
    printf("Enter Number :");
    scanf("%d",&n);
    x = n;
    while (n > 0)
    {
        y = n % 10;
        n = n /10;
        z = z*10 + y;
    }
    printf("%d is revered to : %d",x,z);
}