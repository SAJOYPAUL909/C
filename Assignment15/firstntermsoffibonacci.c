// Write a function to print first N terms of Fibonacci series (TSRN)
#include <stdio.h>
#include <conio.h>
void Fibonacci(int n)
{
    int f1 = 0,f2= 1 ,i;
    if (n < 1)
    return;
    printf("%d ",f1);
    for (i = 1; i < n; i++) {
        printf("%d ", f2);
        int temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }

    
}

void main()
{
    int n;
    printf("Enter the Value of N : ");
    scanf("%d",&n);
    Fibonacci(n);
}