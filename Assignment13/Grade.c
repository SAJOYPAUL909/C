// Write a program to find and display grade obtained by student in a test .
// Grading Specifications are as follows:
// Marks from 90 to 100 : Grade A
// Marks from 80 to less than 90 : Grade B
// Marks from 70 to less than 80 : Grade C
// Marks from 60 to less than 70 : Grade D
// Marks from 50 to less than 60 : Grade E
// Marks below 50 : Grade F
// Marks Greater than 100 or less than 0 :Invalid Marks

#include <stdio.h>
#include <conio.h>

void main()
{
    int m ;

    printf("Enter the Marks Obtained by Student : ");
    scanf("%d",&m);

    switch (m /10)
    {
    
    case 9:
        printf("Grade A");
        break;

    case 8:
        printf("Grade B");
        break;

    case 7:
        printf("Grade C");
        break;
    
    case 6:
        printf("Grade D");
        break;
    
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Grade F");
        break;

    default:
        if ( m == 100)
            printf("Grade A");
        else
        printf("Invalid Marks");
        break;
    }
}