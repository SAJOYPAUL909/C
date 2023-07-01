//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,d;
    printf("Enter coefficient of x^2: ");
    scanf("%d",&a);
    printf("Enter coefficient of x: ");
    scanf("%d",&b);
    printf("Enter constant term: ");
    scanf("%d",&c);

    d = b*b - 4*a*c;
    if (d > 0)
    printf("Roots are real and different.");
    else if (d == 0)
    printf("Roots are real and equal.");
    else
    printf("Roots are complex and different.");
    
}