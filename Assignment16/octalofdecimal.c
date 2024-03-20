// Write a recursive function to print octal of a given decimal number
#include <stdio.h>
#include <conio.h>

int octal(int n)
{
    if ( n == 0)
        return 0;
    else
        return(n%8 + 10 * octal(n/8));
}

void main()
{
    int n,i;
    printf("Enter The number : ");
    scanf("%d",&n);
    i = octal(n);
    printf("%d",i);
}