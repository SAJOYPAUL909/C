//Write a program to calculate factorial of a number
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    int f= 1;

    printf("Enter N : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        f = f*i;
    }
    printf("Factorial of %d  is : %d",n,f);
}