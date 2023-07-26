//write a program to print all Prime Number Under 100
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,count = 0;
    for (j = 2 ; j <= 100; j++)
    {
        count = 0;
        for (i = 2 ; i <= j/2 ; i++)
    {
        if (j%i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf(" %d ",j);
    }
    }
}