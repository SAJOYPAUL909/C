//Write a program to swap values of two int variables in single line arithmetic expression.
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

    //important
    a = a + b - (b = a);  
    printf("\nAfter swapping : a = %d , b = %d ",a,b);

}