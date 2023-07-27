//write a program to print all armstrong number under 1000
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j,d,k,temp1,temp2,count,sum;
    for ( i = 1 ; i < 1000; i++)
    {
        temp1 = i;
        d = 0;
        while (temp1 > 0)
        {
            temp1 = temp1 /10;
            d++;
        }
        temp2 = i;
        sum = 0;
        while(temp2 > 0)
        {
            count = temp2 %10;
            temp2 = temp2 /10;
            k = 1;
            for (j= 0; j < d; j++)
            {
                 k = k*count; 
            }
            sum = sum + k;
        }
        if ( sum == i)
        {
            printf(" %d ",i);
        }

    }
}