// Write a function to find the sum of first N terms of the series 1!/1 + 2!/2 +3!/3 + 4!/4 +5!/5...n!/n (TSRS)
#include <stdio.h>
#include <conio.h>

int fact(int n)
{
    int f = 1;
    for (int i = 1 ; i <= n ; i++)
    {
        f = f* i;
    }
    return f;
}

int Series(int n)
{   int ans;
    ans = fact(n)/n;
    return ans;
}

void main()
{
    int n,ans,sum = 0;
    printf("Enter the value of N :");
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++)
    {
        ans = Series(i);
        sum += ans;
    }
     printf("%d ",sum);
}
