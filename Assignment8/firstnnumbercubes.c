//Write a program to print cubes of the first N natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("First N natural number cubes : ");
    for (i = 1;i<=n;i++ )
    {
        printf("%d ",i*i*i);
    }
}