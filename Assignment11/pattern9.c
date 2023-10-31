// Write  a program to draw the following patterns:
// ABCDE
//  BCDE
//   CDE
//    DE
//     E

#include <stdio.h>
#include <conio.h>
void main ()
{
    int i,j;
    int n;
    char k ;

    printf("Enter the no.s of Line for Pattern 9 :  ");
    scanf("%d",&n);

    for (i = 0; i < n ; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
            printf(" ");

        }
        for (k = 65 + i  ; k < 65 + n ; k++)
            {
                printf("%c",k);
            }
            printf("\n");
    }
}