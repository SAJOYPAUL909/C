// Write  a program to draw the following patterns:
// 1
// 21
// 321
// 4321

#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,n;
    printf("Enter the no.s of Line for Pattern 6 :  ");
    scanf("%d",&n);

    for (i = 1; i <= n ; i++)
    {
        for (j = i ; j >= 1; j --)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}