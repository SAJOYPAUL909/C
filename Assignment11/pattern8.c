// Write  a program to draw the following patterns:
// 1
// 23
// 456
// 78910

#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    int i,j;
    int count = 1;

    printf("Enter the no.s of Line for Pattern 8 :  ");
    scanf("%d",&n);


    for (i = 1; i <= n ; i ++)
    {
        for (j = 1 ; j <= i ; j++)
        {
            printf(" %d ",count++);
        }
        printf("\n");

    }
}