//write a program to calculate HCF of two numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int x1,x2,i,s,hcf = 1;
    printf("Enter Two Numbers :");
    scanf("%d %d",&x1,&x2);
    if (x1 > x2)
    {
        s = x2;
    }
    for (i = s; i >= 1;i--)
    {
        if((x1 % i == 0)&&(x2 % i == 0))
        {
            hcf = i;
            break;
        }
    }
    printf("HCF of %d and %d is : %d",x1,x2,hcf);
}