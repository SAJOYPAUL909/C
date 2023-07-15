//Write a program to print the first N even natural numbers in reverse order 
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n ;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("First N even natural number in reversed order : ");
    for (i= n*2 ;i > 0;i--)
    {
        if (i%2 == 0)
        {
            printf("%d ",i);
        }
    }

}