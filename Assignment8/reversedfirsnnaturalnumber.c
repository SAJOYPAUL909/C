//Write a program to print the first N natural numbers in reverse order
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("First N natural number in Reversed Order : ");
    for (i = n ; i > 0 ;i--)
    {
        printf("%d ",i);
    }
}