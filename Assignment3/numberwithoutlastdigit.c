//Write a program to print a given number without its last digit
#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    a = a/10;
    printf("Number without unit digit is %d",a);
}