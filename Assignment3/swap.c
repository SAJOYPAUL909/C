//Write a program to swap values of two int variables
#include <stdio.h>
#include <conio.h>

void main()
{
    //using third variable
    int a,b,c;
    printf("Enter value of First variable : ");
    scanf("%d",&a);
    printf("Enter value of second variable : ");
    scanf("%d",&b);
    printf("Before swapping : a = %d , b = %d ",a,b);

    c = a;
    a = b;
    b = c;

     printf("\nAfter swapping : a = %d , b = %d ",a,b);

}