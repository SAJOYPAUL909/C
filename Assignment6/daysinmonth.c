//Write a program which takes the month number as an input and display number of days in that month.
#include <stdio.h>
#include <conio.h>
void main()
{
    int m;
    printf("Enter month number : ");
    scanf("%d", &m);
    if(m == 2)
        printf("28 or 29 days");
    else if(m == 4 || m == 6 || m == 9 || m == 11)
        printf("30 days");
    else
        printf("31 days");
    
}
