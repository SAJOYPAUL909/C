// Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>
#include <conio.h>

void display(int n)
{
    printf("%d ",n);
    if (n != 1)
    display(n-1);
}

void main()
{
    int n;
    printf("Enter The Value of N : ");
    scanf("%d",&n);
    display(n);
}