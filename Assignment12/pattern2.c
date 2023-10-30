// Write  a program to draw the following patterns:
// *******
//  *****
//   *** 
//    *

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k,l;
    int n;
    
    printf("Enter the no.s of Line for Pattern 2 :  ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ;i++)
    {
        for (j = 1 ; j < i ; j++)
        {
            printf(" ");
        }
        for (k = i ; k <= n ; k++)
        {
            printf("*");
        }
        for (l = i ; l < n ; l++)
        {
            printf("*");
        }
        printf("\n");
    }
}