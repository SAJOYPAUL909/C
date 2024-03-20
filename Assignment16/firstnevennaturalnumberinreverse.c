// Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
#include <conio.h>

void display(int n)
{
    printf("%d ",2*n);
    if (n != 1)
        display(n-1);

}


void main()
{
    int n;
    printf("Enter the Value of N : ");
    scanf("%d",&n);
    display(n);
}