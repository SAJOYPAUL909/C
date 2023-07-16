//Write a program to calculate sum of squares of first N natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,k;
    int sum = 0;
    printf("Enter N : ");
    scanf("%d",&n);
    for (i = 1 ; i <= n; i++)
    {
        k = i*i;
        sum = sum + k;
    }
    printf("Sum of First %d Natural numbers Square : %d",n,sum);
}