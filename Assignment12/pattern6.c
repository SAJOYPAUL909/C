// Write  a program to draw the following patterns:
// ABCDCBA
//  ABCBA
//   ABA
//    A

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k;
    int n;
    char a;

    printf("Enter the no.s of Line for Pattern 6 :  ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++)
    {
        for (j = 1 ; j <=i ; j++ )
        {
            printf(" ");
        }
        for (k = n , a = 65; k > i ; k--,a++ )
        {
            printf("%c",a);
        }
        for (k = n , a = 65 + n - i ; k >= i ; k--,a-- )
        {
            printf("%c",a);
        }

        printf("\n");
    }
}