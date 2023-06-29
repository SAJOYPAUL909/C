//Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include <stdio.h>
#include <conio.h>

void main()
{
    int a,d;
    printf("Enter the number X:");
    scanf("%d",&a);
    d = a % 10 ;
    a = a /10 ;
    
    printf("Number after right rotation = %d",(d*100)+a);
}