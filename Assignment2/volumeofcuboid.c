//Write a program to calculate volume of a cuboid
#include <stdio.h>
#include <conio.h>

void main()
{
    float l,b,h;

    printf("Enter length of cuboid :");
    scanf("%f",&l);
    printf("Enter breadth of cuboid :");
    scanf("%f",&b);
    printf("Enter height of cuboid :");
    scanf("%f",&h);

    printf("Volume of cuboid is : %f cube unit",l*b*h);

}