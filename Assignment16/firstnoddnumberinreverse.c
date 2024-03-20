// Write a recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
#include <conio.h>

void display(int n)
{
    printf ("%d ",2*n - 1);
    if (n != 1)
        display(n-1);
}



void main()
{
    int n ;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    display(n);
}