// Write  a program to draw the following patterns:
// *******
// *** ***
// **   **
// *     *

#include <stdio.h>
#include <conio.h>
void main()

{
    int i,j;
    int n;

    printf("Enter the no.s of Line for Pattern 8 :  ");
    scanf("%d",&n);

    for (i = 0; i < n ; i++)
    {
        for (j = -n +1; j < n ; j++)
        {
            if (j < i && -i < j )
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        

        
        printf("\n");
    }
}