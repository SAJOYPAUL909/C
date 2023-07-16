// Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i= 0,n;
    int j = 1 ,sum = 0;
    printf("Enter N : ");
    scanf("%d",&n);
    while (i < n)
    {
        if ((j % 2) != 0)
        {
            sum = sum + j ;
            i++;
        
        }
        j++;
    }
    printf("Sum of First %d odd Natural number : %d",n,sum);
}