/* c) Any year is input through the keyboard. 
Write a program to determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator). */


#include<stdio.h>

int main()
{
    int year;

    printf("Enter a year : ");
    scanf("%d", &year);

    if (year%100==0)
    {
        if (year%400==0)
        {
            printf("The year %d is a leap year and also a century year.", year);
        }
        else
        {
            printf("The year %d is a century year not a leap year.", year);
        }
    }
    else if (year%4==0)
    {
        printf("The year %d is a leap year.", year);
    }
    else
    {
        printf("The year %d is not a leap year.", year);
    }
    
    return 0;
}