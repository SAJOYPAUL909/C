// Write a function to calculate the numbers of arrangements one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
#include <conio.h>

int fact(int n)
{
    int f = 1,i;
    for (i = 1 ; i <= n ;i++)
    {
        f =f*i;
    }
    return f;
}

int NPR(int n , int r)
{
    int x,y;
    x = fact(n);
    y = fact(n-r);
    return x/y;
}

void main()
{
    int n,r;
    int per;
    printf("Enter Total No. of Items (N) : ");
    scanf("%d",&n);
    printf("Enter Total No. of selections (r) : ");
    scanf("%d",&r);
    
    per = NPR(n,r);
    printf("The total no of arrangements is %d ",per);
}