//write a program to print first N terms of Fibonacci series
#include <stdio.h>
#include <conio.h>
void main()
{
    int i ,n,a,b,c;
    printf("Enter N : ");
    scanf("%d",&n);
    a = 0;b = 1;
    printf("%d %d",a,b);
    for (i = 2 ; i < n;i++)
    {
        c = a+b;
        a = b;
        b = c;
        printf(" %d",c);

    }

}