//Write a program to check whether a given character is an alphabet (uppercase), 
//an alphabet (lower case), a digit or a special character.
#include <stdio.h>
#include <conio.h>
void main()
{
    char a;
    printf("Enter the character :");
    scanf("%c",&a);
    if (a >= 'a' && a<= 'z')
    printf("lowecase");
    else if (a >= 'A' && a <= 'Z')
    printf("Uppercase");
    else if (a >= '1' && a <= '9')
    printf("digit");
    else 
    printf("Special character");
}