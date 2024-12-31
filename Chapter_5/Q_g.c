/* g) Write a program to enter numbers till the user wants. 
At the end it should display the count of positive, negative and zeros entered. */


#include<stdio.h>

int main()
{
    int num, count_postive = 0, count_negative = 0, count_zero = 0;
    char choice;

    while (1)
    {
        printf("Enter the number : ");
        scanf("%d", &num);

        if (num>0)
        {
            count_postive++;
        }
        else if (num==0)
        {
            count_zero++;
        }
        else if (num<0)
        {
            count_negative++;
        }
        else
        {
            printf("Something went wrong!");
        }
        printf("Enter 'm' for more and 'e' for exit : ");
        scanf(" %c", &choice);

        if (choice=='e')
        {
            break;
        }
    }
    
    printf("Positive number count is : %d\n", count_postive);
    printf("Negative number count is : %d\n", count_negative);
    printf("Zero count is : %d\n", count_zero);

    return 0;
}