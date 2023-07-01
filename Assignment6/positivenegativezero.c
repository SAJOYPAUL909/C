//Write a program to check whether a given number is positive, negative or zero
#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    if (x > 0)
    printf("number is positive");
    else if (x == 0)
    printf("number is zero ");
    else
    printf("number is negative ");

}