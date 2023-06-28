//Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;

    printf("Enter value of First variable : ");
    scanf("%d",&a);
    printf("Enter value of second variable : ");
    scanf("%d",&b);
    printf("Before swapping : a = %d , b = %d ",a,b);

    a = a + b;
    b = a - b;
    a = a - b;   
    printf("\nAfter swapping : a = %d , b = %d ",a,b);
}