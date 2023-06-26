// write a program to calculate average of three user input integer number
#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;
    float average;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the secound number :");
    scanf("%d",&b);
    printf("Enter the third number :");
    scanf("%d",&c);

    average = (a+b+c)/3.0 ;
    printf("Average of %d,%d and %d is %f",a,b,c,average);

}