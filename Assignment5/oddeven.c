//Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    if (((x>>1)<<1)== x)
    printf("Number is even");
    else 
    printf("Number is odd");
}