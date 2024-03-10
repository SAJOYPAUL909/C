// Write a function to print all Armstrong numbers between two given numbers. (TSRN)
#include <stdio.h>
#include <conio.h>
#include <math.h>

void Armstrong(int a ,int b)
{
    int i,x,n,sum = 0,d;
    for (int i = a ; i <= b; i++)
    {

        x = i;
        n = 0;
        while (x != 0)
        {
            d = x % 10;
            n = n + d*d*d;
            x /= 10;
        }
        
        if (n == i)
        {
            printf("%d ",i);
        }

    }
}

void main()
{
    int a,b;
    printf("Enter Two Numbers : ");
    scanf("%d%d",&a,&b);
    Armstrong(a,b);
}