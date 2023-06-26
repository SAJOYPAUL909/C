// Write a program to calculate average of three integers. Numbers are given by the user
#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;
    float average;

    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the third number : ");
    scanf("%d",&c);
    average = (a+b+c)/3.0;
    printf("Average of %d,%d and %d is %f",a,b,c,average);

}
