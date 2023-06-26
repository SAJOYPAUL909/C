/* Write a program to ask user about the cost price and selling price banana per dozen.
Calculate the profit or loss earned upon selling 25 bananas. */

#include <stdio.h>
#include <conio.h>

void main()
{
    float cp,sp,profit,loss;
    printf("Enter cost price of banana per dozen :");
    scanf("%f",&cp);
    printf("Enter selling price of banana per dozen :");
    scanf("%f",&sp);

    cp = (cp /12.0)*25;
    sp = (sp /12.0)*25;

    if (sp > cp)
    {
        profit = sp - cp ;
        printf("The profit on 25 bananas are : %f",profit);
    }
    else
    {
        loss = cp - sp;
        printf("The loss on 25 bananas are : %f",loss);
    }
}