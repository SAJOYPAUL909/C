//Write a program to make the last digit of a number stored in a variable as zero (Example if x-2345 then make it x=2340)
#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    printf("Enter the number X:");
    scanf("%d",&a);

    a = (a / 10) * 10;
    printf("X = %d",a);
}