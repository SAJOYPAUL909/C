//Write a program to print greater between two numbers, Print one number if both are the same
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf ("%d%d",&a,&b);
    if (a>b)
    printf("%d is greater ",a);
    else if (a == b)
    printf("%d both are equal",a);
    else 
    printf("%d is greater ",b);

}