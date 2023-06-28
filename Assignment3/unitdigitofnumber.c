//Write a program to print unit digit of a given number
#include <stdio.h>
#include <conio.h>

void main()
{
    int a,d ;
    printf("Enter the number :");
    scanf("%d",&a);
    d = a % 10;
    printf("Unit digit of given number is %d",d);
}