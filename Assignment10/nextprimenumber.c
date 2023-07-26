//write a program to find next prime number of a given number
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,x,count;

    printf("Enter Numbers : ");
    scanf("%d",&x);

    for (j = x+1 ; ;j++)
    {
        count = 0;
        for(i = 2; i <= j/2;i++)
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
            break;
        }
    }
}