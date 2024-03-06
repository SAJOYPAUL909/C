// write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
#include <conio.h>
double fact(int n)
{
    int i;
    double f = 1;
    for (i = 1 ; i <= n ; i++)
    {
        f = f * i;
    }
    return f;

}
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Factorial of %d is %lf",n,fact(n));

}
