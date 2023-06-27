/* WAP to take time as an input in below given format and convert the time format and
display the result as given below. User Input time format - "HH MM"*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int h,m;
    printf("Input time format -HH:MM ");
    scanf("%d:%d",&h,&m);
    printf("Hour - %d,\tMinute - %d.",h,m);
}