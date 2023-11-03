// Write  a program to draw the following patterns:
//     1
//    1 1
//   1 2 1 
//  1 2 2 1
// 1 2 3 2 1

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k,l;
    int n;
    int a = 1;

    printf("Enter the no.s of Line for Pattern 7 :  ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++)
    {

        k = 1;
        l = 1;
        for (j = 1 ; j < 2*n ; j++)
        {
            if (j >= n-i+1 && j <= n+i-1)
            {
                if (k)
                {
                    printf("%d",l);
                    if (j<n)
                    l++;
                    else
                    l--;
                }
                else{
                    printf(" ");
                    if (j == n )
                    l--;

                }
                k = 1-k;
            }
            else
            printf(" ");
        }
        printf("\n");
        }
        
}