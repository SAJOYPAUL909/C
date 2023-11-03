// Write  a program to draw the following patterns:
// ABCDCBA
// ABC CBA
// AB   BA
// A     A

#include <stdio.h>
#include <conio.h>
void main()

{
    int i;
    char j;
    int n;

    printf("Enter the no.s of Line for Pattern 10 :  ");
    scanf("%d",&n);

    for (i = 0; i < n ; i++)
    {
        for (j = 65 ; j <= 64+ n - i ; j++ )
        {
            printf("%c",j);
        }
        for (j = 65 ; j < 65+ (i*2 - 1) ; j++)
        {
            printf(" ");
        }
        
        {
            for ( j = 64 + n - i ; j >= 65 ; j--)
            {
                if (i == 0 && j == 64 + n )
                j = 63 + n ;
                printf("%c",j);
            }
        }
        printf("\n");
    }
}