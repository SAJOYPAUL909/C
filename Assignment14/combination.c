// Write a function to calculate the number of commbinations one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
#include <conio.h>
int fact(int n)
{
    int f = 1;
    int i;
    for (int i = 1 ; i <= n ; i++)
    {
        f = f * i;
    }
    return f;
}
int NCR(int n , int r)
{
    int x,y,z;
    x = fact(n);
    y = fact(n-r);
    z = fact(r);

    return x/(y*z);

}
void main()
{
    int n, r;
    int comb;
    printf("Enter Total No. of Items (N) : ");
    scanf("%d",&n);
    printf("Enter Total No. of selections (r) : ");
    scanf("%d",&r);
    
    comb = NCR(n,r);
    printf("The total combination is %d ",comb);

}