//Write a program to print a table of N
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    int i;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("Table of N : ");
    for (i = 1; i<= 10; i++)
    {
        printf("\n%d X %d = %d",n,i,i*n);
    }
}