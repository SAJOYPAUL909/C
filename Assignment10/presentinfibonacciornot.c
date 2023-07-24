//write a program to check whether a given number is there in the Fibonacci series or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int i ,n,a,b,c;
    a = 0;
    b = 1;
     
    printf("Enter Number To Check : ");
    scanf("%d",&n);
    if (n != a || n != b)
    {
        for (;;)
        {
            c = a + b;
            a = b;
            b = c;
            if (n == c )
            {
                printf("Number is present ");
                break;
            }
            if (n < c )
            {
                printf("Number is not  present ");
                break;
            }
        }
    }
    else
    printf("Number is present ");

}