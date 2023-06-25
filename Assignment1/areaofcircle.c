//write a program to calculate area of circle with taking radius from user
#include <stdio.h>
#include <conio.h>

void main()
{
    int r ;
    float a;
    float pi;
    printf("Enter radius of circle :");
    scanf("%d",&r);
    pi = 22.0 / 7.0;
    a = pi*r*r ;
    printf("The Area of circle  is %f having a radius %d",a,r);
}