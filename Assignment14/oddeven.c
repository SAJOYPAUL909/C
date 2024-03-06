// Write a function to Check wheather a given number is even or odd . Return 1 if the number is even , otherwise return 0 (TSRS)
#include <stdio.h>
#include <conio.h>
int odd_even(int n)
{
    if (n % 2 == 0)
    return 1;
    return 0;
}

void main()
{
    int n, ans;
    printf("Enter the number : ");
    scanf("%d",&n);
    ans = odd_even(n);
    printf("%d",ans);
}