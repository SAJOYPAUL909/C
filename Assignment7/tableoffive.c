//write a program to print a table of 5.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    printf("Table of 5 :");
    for (i = 1; i<= 10; i++)
    {
        printf("\n5 X %d = %d",i,i*5);
    }
}