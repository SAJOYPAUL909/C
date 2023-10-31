// Write  a program to draw the following patterns:
// *****
// *   *
// *   *
// *   *
// *****

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j;
    int n;

    printf("Enter the no.s of Line for Pattern 10 :  ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++)
    {
        for (j = 1 ; j <= n ; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            } 
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
}

