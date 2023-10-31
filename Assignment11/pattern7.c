// Write  a program to draw the following patterns:
// ABCDE
//  ABCD
//   ABC
//    AB
//     A

#include <stdio.h>
#include <conio.h>
void main()
{
    int i,l;
    char j,k;
    int n;

    printf("Enter the no.s of Line for Pattern 7 :  ");
    scanf("%d",&n);

    for (i = n ; i > 0 ; i--)
    {


        for (l = n ; l > i ; l--)
        {
            printf(" ");
        }
        k = 65 + i;
        for (j = 65  ; j < k ; j++)
        {
            printf("%c",j);
        }
        
        printf("\n");
    }
    


}