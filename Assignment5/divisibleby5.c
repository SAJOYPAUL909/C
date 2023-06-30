//Write a program to check whether a given number is divisible by 5 or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    if (x%5 == 0)
    printf("divisible by 5");
    else 
    printf("Not divisible by 5");
}