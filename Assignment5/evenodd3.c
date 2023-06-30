//Write a program to check whether the given number is even or odd using a bitwise operator.
#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    if (x & 1)
    printf("Number is odd");
    else 
    printf("Number is even");
}