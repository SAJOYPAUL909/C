//Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not
#include <stdio.h>
#include <conio.h>
void main()
{
    float a,b,c;
    printf("Enter the length of the sides of a triangle :");
    scanf("%f%f%f",&a,&b,&c);
    if (a < b+c && b < a+c && c  < a+b)
    printf("Triangle is valid");
    else 
    printf("Triangle is invalid");

}