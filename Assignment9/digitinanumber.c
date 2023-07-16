//Write a program to count digits in a given number
#include <stdio.h>
#include <conio.h>
void main ()
{
    int n,temp;
    int count = 0;
    printf("Enter Nunber : ");
    scanf("%d",&n);
    temp = n;
    while (n > 0)
    {
        n = n / 10;
        count++; 
    }
    printf("Digits in number %d is : %d ",temp,count);
      
}