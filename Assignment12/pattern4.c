// Write  a program to draw the following patterns:
//    1
//   121
//  12321
// 1234321

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k,l;
    int n;

    printf("Enter the no.s of Line for Pattern 4 :  ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++)
    {
        for(j = n ;j > i ; j--)
        {
            printf(" ");
        }
        for (k = 1 ; k <= i ; k++)
        {
            printf("%d",k);
        }
        for (l = i -1  ; l >= 1 ; l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}