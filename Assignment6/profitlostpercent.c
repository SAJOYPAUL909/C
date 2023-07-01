//Write a program which takes the cost price and selling price of a product from the user. 
//Now calculate and print profit or loss percentage.
#include <stdio.h>
#include <conio.h>
void main()
{
    float sp,cp,p,l,pp,lp;
    printf("Enter cost price of a product  :");
    scanf("%f",&cp);
    printf("Enter selling price of a product  :");
    scanf("%f",&sp);

    if (sp > cp)
    {
        p = sp -cp;
        pp = (p/cp) *100;
        printf("Profit percentage = %f",pp);
    }
    else
    {
        l = cp - sp;
        lp = (l/cp)*100;
         printf("lost percentage = %f",lp);
    }
}