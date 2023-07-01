//Write a program to check whether a given alphabet is in uppercase or lowercase
#include <stdio.h>
#include <conio.h>
void main()
{
    char x;
    printf("Enter the alphabet :");
    scanf("%c",&x);

    if (x >= 'A' && x <= 'Z')
    printf("Uppercase");
 
    else if (x >= 'a' && x <= 'z')
     printf("Lowercase");
    
    else
    printf("Not a alphabet");
}