//Write a program to check whether a given number is divisible by 3 and divisible by 2
#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter the number ");
    scanf("%d",&x);
    if ((x%2 == 0) &&(x%3 == 0))
    printf("Number is divisible by 2 and 3");
    else if (x%2 == 0)
    printf("Number is divisible by 2 only");
    else if (x%3 == 0)
    printf("Number is divisible by 3 only");
    else 
    printf("Number is not divisible by both 2 and 3");

}