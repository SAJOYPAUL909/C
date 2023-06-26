// Write a program to calculate simple interest.
#include <stdio.h>
#include <conio.h>

void main()
{
    float p,r,t,si;
    printf("Enter principle :");
    scanf("%f",&p);
    printf("Enter rate :");
    scanf("%f",&r);
    printf("Enter Time period :");
    scanf("%f",&t);

    si = (p*r*t)/100;
    printf("Simple Interest :%f",si);
}