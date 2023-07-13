//write a program to print first 10 even natural number
#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0;
    int j = 1;
    while (i < 10)
    {
        if (j %2 ==0)
        {
            printf("%d ",j);
            i++;
        }
        j++;
    }
}