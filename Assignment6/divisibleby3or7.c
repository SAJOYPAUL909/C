//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    if (x%3 == 0  && x%7 == 0)
    printf("number is divisible by both 3 and 7");
    else if (x%3 == 0)
    printf("number is divisible by 3");
    else if (x%7 == 0)
    printf("number is divisible by 7");

    else
    printf("number is not divisible by any (3 or 7)");

}