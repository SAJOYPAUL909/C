//Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int n ;
    int sum = 0,i = 0 ,j = 1;

    printf("Enter N : ");
    scanf("%d",&n);
    
     while (i < n)
    {
        if (j % 2 == 0)
        {
            sum = sum + j;
            i++;
        }
        j++;
    }

    
    printf("Sum of First %d Even natural number is : %d",n,sum);
}