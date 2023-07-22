//write a program to find the Nth term of fibonacci Series
#include <stdio.h>
#include <conio.h>
void main()

{
    int n ,i=0,a,b,c;
    printf("Enter N : ");
    scanf("%d",&n);
    a =0;
    b = 1;
    for (i = 2 ; i<= n ;i++)
    {
        c = a+b;
        a = b;
        b = c;

    }
    printf("%d th Term in Fibonacci is : %d",n,c);
}