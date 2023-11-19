// Write a program to check whether a given character is vowel or 
// consonant or some other special character,using switch case statement.

#include <stdio.h>
#include <conio.h>

void main()
{
    char n;
    printf("Enter the Character : ");
    scanf("%c",&n);

    switch (n)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("%c is a Vowel ",n);
        break;
    
    case 'B':
    case 'b': 
    case 'C':
    case 'c':
    case 'D':
    case 'd':
    case 'F':
    case 'f':
    case 'G':
    case 'g':
    case 'H':
    case 'h':
    case 'J':
    case 'j':
    case 'K':
    case 'k':
    case 'L':
    case 'l':
    case 'M':
    case 'm':
    case 'N':
    case 'n':
    case 'P':
    case 'p':
    case 'Q':
    case 'q':
    case 'R':
    case 'r':
    case 'S':
    case 's':
    case 'T':
    case 't':
    case 'V':
    case 'v':
    case 'W':
    case 'w':
    case 'X':
    case 'x':
    case 'Y':
    case 'y':
    case 'Z':
    case 'z':
        printf("%c is a consonant",n);
        break;

    default:
        printf ("%c is a Special or numeric character",n);
        break;
    }    
}