//Write a program to calculate sum of first N natural numbers
#include <stdio.h>
#include <conio.h>

void main()
{
    int i,n;
    int sum = 0;
    printf("Enter N : ");
    scanf("%d",&n);

    for (i = 1; i <= n ; i++)
    {
        sum = sum + i;
    }

    printf("Sum of First %d Natural number is : %d",n,sum);
    

}