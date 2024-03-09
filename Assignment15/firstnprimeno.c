// Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
#include <conio.h>
void Nprime(int n)
{
    int x = 0;
    int i = 2;
    int flag;
    while (x < n)
    {
        flag = 1;
        for (int j = 2; j < i; j++) 
        {
            if (i % j == 0)
            flag = 0;
        }
        if (flag == 1)
        {
            printf("%d ",i);
            x++;
        }
        i++;
    }
}
void main()
{
    int n;
    printf("Enter The Value of N : ");
    scanf("%d",&n);
    Nprime(n);
    
}