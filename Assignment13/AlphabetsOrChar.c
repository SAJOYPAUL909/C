// Write a program to check whether a given character is uppercase alphabet 
// or lowercase alphabet or some other special character, using swich case statement.
#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    char c;

    printf("Enter the Character : ");
    scanf("%c",&c);

    if (c >= 'A' && c <= 'Z')
    i = 1;
    else if (c >= 'a' && c <= 'z')
    i = 2;
     
    switch (i)
    {
    case 1:
        printf("%c is a UpperCase Alphabet ",c);
        break;

    case 2:
        printf("%c is a LowerCase Alphabet ",c);
        break;

    default:
        printf("%c is a Special character or numeric ",c);
        break;
    }


}