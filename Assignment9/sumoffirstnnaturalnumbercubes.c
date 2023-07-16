//Write a program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,k;
    int sum = 0;
    printf("Enter N : ");
    scanf("%d",&n);
    for (i = 1; i<= n ;i++)
    {
        k = i*i*i;
        sum = sum + k;
    }
    printf("Sum of first %d Natural numbers cube : %d",n,sum);

}