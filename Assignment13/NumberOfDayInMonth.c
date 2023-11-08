// Write a program that takes the month number as an input and display number of days in that month

#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter the no. of the month : ");
    scanf("%d",&n);
    
    switch (n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 Days");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 Days");
        break;
    case 2:
        printf("Either 28 Days or if leap year than 29 Days");
        break;
    
    default:
        printf("Please enter a vaild Month number :");
        break;
    }


}