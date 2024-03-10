// Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
#include <conio.h>
void primebet(int a ,int b)
{
    int x = a;
    while(x <= b && x >= a)
    {
        int flag = 1;
        for(int j = 2 ; j < x;j++)
        {
            if (x%j == 0)
            flag = 0;
        }
        if (flag == 1)
        {
            printf("%d ",x);
        }
        x++;
    }
    
}


void main()
{
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d%d",&a,&b);
    primebet(a,b);
}