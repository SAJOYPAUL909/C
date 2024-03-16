// Write a recursive function to print first N natural numbers
#include <stdio.h>
#include <conio.h>


void display(int num)
{
    if (num)
        display(num -1);
    else
        return;

    printf("%d ",num);

}

void main()
{
    int n;
    printf("Enter the vlaue of n : ");
    scanf("%d",&n);
    display(n);
}

