/* a) A year is entered through the keyboard, write a 
program to determine whether the year is leap or not. 
Use the logical operators && and ||. */


#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year : ");
    scanf("%d", &year);

    if (year % 100 == 0 && year % 400 == 0)
    {
        printf("The year %d is a leap year and also a century year.", year);
    }
    else if (year % 100 != 0 && year % 4 == 0)
    {
        printf("The year %d is a leap year.", year);
    }
    else
    {
        printf("The year %d is not a leap year.", year);
    }

    return 0;
}