//write a program to print first 10 odd natural number
#include <stdio.h>
#include <conio.h>
void main()
{
    int i ;
    
    for (i= 10*2 ;i > 0;i--)
    {
        if (i%2 != 0)
        {
            printf("%d ",i);
        }
    }

}