// Write a program which takes the day number of a week and 
// displays a unique greeting message for the day.

#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter The number of the day of week : ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("Monday: Have a great start to your week!");
        break;
    case 2:
        printf("Tuesday: Keep up the good work!");
        break;
    case 3:
        printf("Wednesday: Halfway through the week, you can do it!");
        break;
    case 4:
        printf("Thursday: Keep pushing, the weekend is almost here!");
        break;

    case 5:
        printf("Friday: Happy Friday! Have a great weekend!");
        break;
    
    case 6:
        printf("Saturday: Enjoy your weekend!");
        break;

    case 7:
        printf("Sunday: Have a relaxing Sunday!");
        break;
    
    default:
        printf("Please Enter a vaild entry from 1-7");
        break;
    }
    
}