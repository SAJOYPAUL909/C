// Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
#include <conio.h>

int LCM(int a, int b)
{
    int g,s,lcm;
    if (a > b)
    g = a;
    else
    g = b;
    while (1)
    {
        if ((g%a == 0) && (g%b == 0))
        {
            lcm = g;
            break;
        }
        g++;
    }
    return lcm;
}


void main()
{
    int a,b,ans;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the Second number : ");
    scanf("%d",&b);
    ans = LCM(a,b);
    printf("The LCM of %d and %d is %d",a,b,ans);

}