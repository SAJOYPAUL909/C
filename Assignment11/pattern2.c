// Write  a program to draw the following patterns:
//      *
//     **
//    ***
//   ****
//  *****
 #include <stdio.h>
 #include <conio.h>

 void main ()
 {
     int i,j,k,n;
   
    
    printf("Enter the no.s of Line for Pattern 2 :  ");
    scanf("%d",&n);

    for(i = 1 ; i <=n ; i++)
    {
        for (j = n ; j < i ; j-- )
        {
            printf(" ");
        }
        for (k = 1 ; k <= i ; k++ )
        {
        printf("*");
        }
        printf("\n");
    }
 }
