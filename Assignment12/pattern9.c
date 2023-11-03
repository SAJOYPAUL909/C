// Write  a program to draw the following patterns:
// 1234321
// 123 321
// 12   21
// 1     1

#include <stdio.h>
#include <conio.h>
void main()

{
    int i,j;
    int n;

    printf("Enter the no.s of Line for Pattern 9 :  ");
    scanf("%d",&n);

    for (i = 0; i < n ; i++)
    {
        for (j = 1 ; j <= n - i ; j++ )
        {
            printf("%d",j);
        }
        for (j = 1 ; j <= i*2 - 1 ; j++)
        {
            printf(" ");
        }
        
        {
            for ( j = n - i ; j >= 1 ; j--)
            {
                if (i == 0 && j == n )
                j = n -1;
                printf("%d",j);
            }
        }
        printf("\n");
    }
}