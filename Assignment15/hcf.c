// Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
#include <conio.h>
int HCF(int a , int b)
{
    int s,i,hcf;
    if ( a > b)
    s = b;
    else
    s = a;
    for (i = s ; i >= 1 ; i--)
    {
        if ((a%i == 0) && (b%i == 0))
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}


void main()
{
    int a,b,ans;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the Second number : ");
    scanf("%d",&b);
    ans = HCF(a,b);
    printf("The HCF of %d and %d is %d",a,b,ans);
}