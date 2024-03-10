// Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>
#include <conio.h>
void PASCAL(int n)
{
    for(int i=1 ; i <= n;i++)
    {
        int x =1;
        for(int j =1 ;j <=i; j++)
        {
            printf("%d",x);
            x = x *(i-j)/j;
        }
        printf("\n");
    }
}


void main()
{
    int n;
    printf("Enter the Value of N : ");
    scanf("%d",&n);
    PASCAL(n);
}