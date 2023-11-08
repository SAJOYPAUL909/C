// Write a menu driven Program with the following options:
// 1. Addition
// 2. Substraction
// 3. Multiplication
// 4. Division
// 5. Exit

#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,a,b;
    float c,d;

    while( i != 1)
    {
        printf("Enter No of the following options to perform :\n");
        printf("\n1. Addition\n2. Substraction\n3. Multiplication\n4. Divison\n5.Exit\n");
        scanf("%d",&n);

        switch (n)
        {
        case 1:
        printf("Enter any two no.s\n");
        scanf("%d %d",&a,&b);
        printf("Addition of %d and %d is %d\n\n",a,b,a+b);
            break;
        
        case 2:
        printf("Enter any two no.s\n");
        scanf("%d %d",&a,&b);
        printf("Substraction of %d and %d is %d\n\n",a,b,a-b);
            break;

        case 3:
        printf("Enter any two no.s\n");
        scanf("%d %d",&a,&b);
        printf("Multiplication of %d and %d is %d\n\n",a,b,a*b);
            break;
        
        case 4:
        printf("Enter any two no.s\n");
        scanf("%f %f",&c,&d);
        printf("Division of %f and %f is %f\n\n",c,d, c/d);
            break;

        case 5:
            i = 1;
            break;
        default:
            printf("Invalid Option Entered\n\n");
            break;
        }
    }

}