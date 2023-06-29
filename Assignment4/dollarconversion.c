//  Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD
#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    float d,r = 84.23;
    printf("Enter the amount in INR:");
    scanf("%d",&i);

    d = i / r ;
    printf("Amount in equivalent USD is %f",d);
}
