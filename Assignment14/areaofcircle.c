// Write a function to calculate  the area of circle. (TSRS)
#include <stdio.h>
#include <conio.h>

float area_of_circle(float r)
{
    float ans = 3.14 * r * r ;
    return ans; 
}

void main()
{
    float r;
    float ans;
    printf("Enter the radius of circle : ");
    scanf("%f",&r);

    ans = area_of_circle(r);
    printf("\nThe Area of Circle is %f",ans);

}