//write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,m,r,temp = 0,sum = 0,d = 0,k ;
    printf("Enter Number : ");
    scanf("%d",&n);

    temp = n;
    while (n > 0)
    {
        n = n / 10;
        d++; 
    }
    r = temp;
    while (r > 0)
   { 
        k = r % 10;
        r = r/10;
        m = 1;
        for (i = 0 ; i < d;i++)
        {
            m = m * k;
        }
        sum = (sum + m);

   } 
   if ( temp == sum)
   {
        printf("%d is a Armstrong Number ",sum);
   }
   else 
   {
        printf("%d is Not a Armstrong Number ",sum);
   }


}