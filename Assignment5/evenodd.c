//Write a program to check whether a given number is an even number or an odd number
#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter the number :");
    scanf("%d",&x);

    if(x%2 == 0)
    printf("number is even ");
    else
    printf("number is odd");
    

}