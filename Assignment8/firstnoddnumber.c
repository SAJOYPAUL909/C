//Write a program to print the first N odd natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    int i = 0;
    int j = 1;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("First N odd Natural number : ");
    while (i < n)
    {
        if (j %2 !=0)
        {
            printf("%d ",j);
            i++;
        }
        j++;
    }
}