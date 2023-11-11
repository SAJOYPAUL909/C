// Write a menu driven program with the following option:
// 1. Factorial of a number
// 2. Check Even and Odd
// 3. Area of Circle
// 4. Sum of first N natural numbers
// 5. Exit

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,n,a ;
    int fact = 1,sum = 0;
    float b , area;

    while( i != 0)
    {
        printf("Enter your Choice: ");
        printf("\n1. Factorial of a number");
        printf("\n2. Check Even and Odd");
        printf("\n3. Area of Circle");
        printf("\n4. Sum of first N natural numbers");
        printf("\n5. Exit\n");
        scanf("%d",&n);
        printf("\n");

        switch (n)
        {
        case 1:
            printf("Enter Number :\n");
            scanf("%d",&a);
            
            for (i = 1 ; i <= a ;i++)
            {
                fact = i * fact;
            }
            printf("\nFactorial of the given number is %d\n",fact);
            printf("\n");
            break;
        
        case 2 :
            printf("Enter Number :\n");
            scanf("%d",&a);
            if (a & 1 )
            printf("Number is Odd\n");
            else
            printf("Number is Even\n");
            printf("\n");
            break;

        case 3:
            printf("Enter the Value of Radius :\n");
            scanf("%f",&b);
            area = (22.0/7.0)*b*b;
            printf("Area of Circle of Radius %0.2f is %f\n",b,area);
            printf("\n");
            break;

        case 4:
            printf("Enter Number the Value of N: \n");
            scanf("%d",&a);
            for (i = 1 ; i <= a ; i++ )
            {
                sum = sum + i;
            }
            printf("The Sum of First %d Natural Numbers is %d \n",a,sum);
            printf("\n");
            break;

        case 5:
            printf("Exited\n");
            i = 0;
            break;

        default:
            printf("Invalid Option\n");
            printf("\n");
            break;
        }


    }

}