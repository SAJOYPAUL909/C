//Write a program to input a character from the user and print its ASCII code.
#include <stdio.h>
#include <conio.h>

void main()
{
    char c;
    printf("Enter the character to find its ASCII :");
    scanf("%c",&c);
    printf("The ASCII of Character %c is %d",c,c);
}