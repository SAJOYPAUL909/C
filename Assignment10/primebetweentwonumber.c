//write a program to print all Prime number between two given number 
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,x1,x2,count,g,s;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&x1,&x2);

    if (x1 > x2)
    {
        g = x1;
        s = x2;
    }
    else
    {
        g = x2;
        s = x1;
    }

    for (j = s ;j <= g ; j++)
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