//write a program to calculate circumference of circle
#include <stdio.h>
#include <conio.h>

void main()
{
    int r;
    float pi = 22.0/7.0,cir;
    printf("Enter the radius of circle :");
    scanf("%d",&r);

    cir = 2*pi*r;
    printf("The circumference of circle is %f of radius %d",cir,r);
    

}