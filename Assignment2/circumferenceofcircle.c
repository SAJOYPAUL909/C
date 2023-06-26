//Write a program to calculate circumference of a circle.
#include <stdio.h>
#include <conio.h>

void main()
{
    int r;
    float pi = 22.0/7.0,cir;

    printf("Enter the radius of circle :");
    scanf("%d",&r);

    cir = 2*pi*r;
    printf("circumference of a circle is %f",cir);
}