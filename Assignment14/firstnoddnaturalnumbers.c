// write a function to print first N odd Natural numbers. (TSRN)
#include <stdio.h>
#include <conio.h>
void oddnum(int n)
{
    int i ;
    for (int i = 1 ; i < 2*n ; i = i+2)
    {
        printf("%d ",i);
    }
}
void main()
{
    int n;
    printf("Enter the Value of N : ");
    scanf("%d",&n);
    oddnum(n);
}