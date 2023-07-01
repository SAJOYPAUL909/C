//Write a program to check whether a given number is a three digit number or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    if (x> 99 && x<1000)
    printf("Number is three digit number ");
    else
    printf("Number is not a three digit number");

}