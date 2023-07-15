//Write a program to print the first N natural numbers
#include <stdio.h>
#include <conio.h>

void main()
{
    int i,n;
    printf("Enter N : ");
    scanf("%d",&n);
    for (i = 1; i<= n;i++)
    {
        printf("%d ",i);
    }
}