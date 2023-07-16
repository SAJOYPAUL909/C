//Write a program to check whether a given number is a Prime number or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,count = 0;
    printf("Enter Number : ");
    scanf("%d",&n);
    for (i = 2 ; i <= n/2 ; i++)
    {
        if (n%i == 0)
        {
            count++;
            break;
        }    
    }
    if (count == 0)
    {
        printf("%d is a Prime Number ",n);
    }
    else
    {
         printf("%d is Not Prime Number ",n);
    }
}