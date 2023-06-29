// Write a program to input a three digit number and display the sum of the digits
#include <stdio.h>
#include <conio.h>

void main()
{
    int a,d,sum = 0;
    printf("Enter three digit number :");
    scanf("%d",&a);
       while(a!= 0)
       {
         d = a % 10;
        sum = sum +  d;
        a = a/10;
       }
    printf("Sum of digit is :%d",sum);
}