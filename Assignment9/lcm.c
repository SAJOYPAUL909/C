//Write a program to calculate LCM of two numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int x1,x2,g ,lcm ;
    printf("Enter Two numbers : ");
    scanf("%d %d",&x1,&x2);

    if (x1> x2)
    {
        g = x1;
    }
    else 
    {
        g = x2;
    }
    while (1)
    {
        if ((g%x1 == 0) && (g%x2 == 0))
        {
            lcm = g;
            break;
        }
        g++;
    }
    printf("LCM of %d and %d is : %d ",x1,x2,lcm);
}