//Write a program to check whether a given number is positive or non positive.
#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    if (x >0)
    {
        printf("Number is positive");
    }
    else if (x == 0)
    {
        printf("Number is zero (not positive nor negative)");
    }
    else 
    {
        printf("Number is negative");
    }
}