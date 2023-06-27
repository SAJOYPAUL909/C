//Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
#include <stdio.h>
#include <conio.h>

void main()
{
    char a,b,c;
    printf("Enter three characters : ");
    scanf("%c %c %c",&a,&b,&c);

    printf("The ASCII code corresponding to characters are :\n%c :- %d\n%c :- %d\n%c :- %d",a,a,b,b,c,c);

}