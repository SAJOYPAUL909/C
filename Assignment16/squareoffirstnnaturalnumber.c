// Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
#include <conio.h>

void display(int n)
{
    if (n)
        display(n-1);
    else 
        return;
    printf("%d ",n*n);
}


void main()
{
    int n;
    printf("Enter the Value of N : ");
    scanf("%d",&n);
    display(n);
}