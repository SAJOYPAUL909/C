// Write a recursive function to print binary of a given decimal number
#include <stdio.h>
#include <conio.h>

int decimaltobinary(int n)
{
    if (n == 0)
        return 0;
    else
        return (n%2 + 10 * decimaltobinary(n/2));
}

void main()
{
    int n,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    i = decimaltobinary(n);
    printf("%d ",i);
}