// Write a menu driven program with the following options:
// 1. check whether a given set of three numbers are lengths of an isosceles triangle or not.
// 2. check whether a given set of three numbers are lengths of sides of a right angled triangle or not.
// 3. check whether a given set of three numbers are equilateral triangle or not.
// 4. exit

#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c,i,n;

    while (i != 1)
    {
    printf("Enter Your Choice: ");
    printf("\n1.Check whether a given set of three numbers are lengths of an isosceles triangle or not");
    printf("\n2.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
    printf("\n3.Check whether a given set of three numbers are equilateral triangle or not");
    printf("\n4.Exit\n");
    scanf("%d",&n);


    switch (n)
    {
    case 1:
        printf("Enter the set of three numbers : ");
        scanf("%d%d%d",&a,&b,&c);

        if (a == b || b == c || c == a)
        {
            printf("Given triangle is isosceles Triangle\n ");
        }
        else
        {
            printf("Given triangle is not isosceles Triangle\n ");
        }
        break;

    case 2:
        printf("Enter the set of three numbers : ");
        scanf("%d%d%d",&a,&b,&c);

        if ((a*a) == (b*b + c*c) || (b*b)== (a*a + c*c) || (c*c) == (a*a +b*b) )
        {
            printf("Given triangle is a Right angled Triangle\n ");
        }
        else
        {
            printf("Given triangle is not Right angled Triangle\n ");
        }
        break;

        case 3:
        printf("Enter the set of three numbers : ");
        scanf("%d%d%d",&a,&b,&c);

        if (a == b && b == c)
        {
            printf("Given triangle is Equilateral Triangle\n ");
        }
        else
        {
            printf("Given triangle is not a Equilateral Triangle\n ");
        }
        break;
    
    case 4 :
        printf("Exited");
        i = 1;
        break;

    default:
    printf("Enter Invaild option");
        break;
    }
    }


}