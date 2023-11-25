// Write a menu driven program with the following options:
// 1. Calculate LCM of two numbers.
// 2. Calculate sum of the digits of a number
// 3. Volume of a cuboid

#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    int a,b,c;
    int g,lcm,sum = 0,d;
    printf("Enter Your Choice : \n");
    printf("1. Calculate LCM of two numbers. : \n");
    printf("2. Calculate sum of the digits of a number : \n");
    printf("3. Volume of a cuboid : \n");
    scanf("%d",&n);

    switch (n)
    {
    case 1 :
        printf("Enter Two Numbers : ");
        scanf("%d%d",&a,&b);
        if (a > b)
        {
           g = a;
        }
        else
        {
            g = b;
        }

        while (1)
        {
            if ((g % a == 0) && (g % b == 0))
            {
                lcm = g;
                break;
            }
            g++;   
        }
        printf("LCM of %d and %d is : %d ",a,b,lcm);
        break;

    case 2:
        printf("Enter the Number : ");
        scanf("%d",&a);
        b = a ;
        while (b != 0)
        {
            d = b % 10 ;
            b = b / 10;
            sum = sum + d ;
        }
        printf("Sum of Digit of %d is %d ",a,sum);
        break;

    case 3:
        printf("Enter the Length Breadth height :");
        scanf("%d%d%d",&a,&b,&c);

        g = a * b * c;
        printf("Volume of Cuboid is %d",g);  
        break;

    default:
        printf("Invalid Option");
        break;
    }
}