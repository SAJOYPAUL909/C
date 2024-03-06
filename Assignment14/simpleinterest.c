// Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
#include <conio.h>

float si(float p,float r,float t)
{
    return (p*r*t)/100 ;
}
void main()
{
    float p,r,t,ans;
    printf("Enter The Principle : ");
    scanf("%f",&p);
    printf("Enter the Rate : ");
    scanf("%f",&r);
    printf("Enter Time period in Years : ");
    scanf("%f",&t);
    printf("The Si is %f",si(p,r,t));
}