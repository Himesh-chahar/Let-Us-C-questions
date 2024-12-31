/* a) If cost price and selling price of an item are input through the keyboard,
 write a program to determine whether the seller has made profit or incurred loss. 
 Also determine how much profit he made or loss he incurred. */


#include <stdio.h>

int main()
{
    float cp, sp;

    printf("Enter the cost price of the item : ");
    scanf("%f", &cp);
    printf("Enter the selling price of the item : ");
    scanf("%f", &sp);

    if (cp == sp)
    {
        printf("There is no profit and no loss. Profit = Loss = 0.\n");
    }
    else if (cp > sp)
    {
        printf("There is a loss of %.2f", cp - sp);
    }
    else if (sp > cp)
    {
        printf("There is profit of %.2f", sp - cp);
    }
    else
    {
        printf("Something went wrong!");
    }

    return 0;
}