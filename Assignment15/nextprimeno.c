// Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
#include <conio.h>
int Prime(int n)
{
    int i,ans;
    for (i = 2 ; i <= n/2; i++)
    {
        if (n%i == 0)
        return 0;
    }
    return n;
}

int Nextprime(int n)
{
    int i = 0;
    while (i == 0)
    {
       i =  Prime(n);
       if (i != 0)
       break;
       n++;
    }
    return n;

}

void main()
{
    int n,ans;
    printf("Enter the Number : ");
    scanf("%d",&n);
    ans = Nextprime(n);
    printf("The Next Prime Number is %d",ans);
}