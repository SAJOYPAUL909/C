// Write  a program to draw the following patterns:
//     *
//    ***
//   *****
//  *******

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k,l;
    int n;
    printf("Enter the no.s of Line for Pattern 1 :  ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++)
    {
        for (j = i ; j < n ; j++)
        {
            printf(" ");
        }
        for (k = 1 ; k <= i ; k++)
        {
            printf("*");
        }
        for (l = 1 ; l < i ;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}