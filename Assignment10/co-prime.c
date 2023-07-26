//write a program to check whether two given number are co-prime or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int x1,x2,i,s,gcd;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&x1,&x2);
    if (x1 > x2)
    {
        s = x2;
    }
    else 
    {
        s = x1;
    }

    for (i = s;  i >= 1; i--)
    {
        if (( x1 % i == 0) && (x2 % i == 0))
        {
            gcd = i;
            break;
        }
    }
    if (gcd == 1)
    {
        printf("The %d and %d are co-prime Numbers",x1,x2);
    }
    else
    {
        printf("The %d and %d are not co-prime Numbers",x1,x2);
    }
}