// Write  a program to draw the following patterns:
//  *****
//  ****
//  ***
//  **
//  *

#include <stdio.h>
#include <conio.h>
void main()
{
      int i,j,n;
    printf("Enter the no.s of Line for Pattern 3 :  ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++)
    {
        for (j = n ; j >= i ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}