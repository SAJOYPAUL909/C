// Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
#include <conio.h>
int Prime(int n)
{
    int i,ans;
    for (i = 2; i <= n/2 ; i++)
    {
        if (n%i== 0)
        return 0;
    }
    return 1; 
}
void main()
{
    int n,i;
    printf("Enter The Number : ");
    scanf("%d",&n);
    i = Prime(n);
    if (i == 1)
    printf("Number is prime");
    else
    printf("Number is not a prime");

}