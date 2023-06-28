//Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.
#include <stdio.h>
#include <conio.h>

void main()
{
    char a = 'A';
    a += 1;
    printf("variable value : %c",a);

}