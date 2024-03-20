// Write a recursive function to print reverse of a given number
#include <stdio.h>
#include <conio.h>
#include <math.h>

int reverse(int n)
{

    int d = (int) log10(n);
    if (n == 0)
        return 0;
    else
        return (((n%10)* pow(10,d)) + reverse(n/10));
}


void main()
{
    int n,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    i = reverse(n);
    printf("%d ",i);

}