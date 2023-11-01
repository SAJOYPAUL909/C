// Write  a program to draw the following patterns:
// ABCDEFG
//  ABCDE
//   ABC
//    A

#include <stdio.h>
#include <conio.h>

void main ()
{
    int i,j,k,l;
    int n;
    char a;

    printf("Enter the no.s of Line for Pattern 5 :  ");
    scanf("%d",&n);

    for (i = 0 ; i < n ; i++)
    {
        for (j = 1 ; j <= i ; j++)
        {
            printf(" ");
        }
        for (a = 65,k = (n*2 - i*2 -1 ) ; k >= 1 ; k--,a++ )
        {
            printf("%c",a);
        }
        
        printf("\n");
    }

}