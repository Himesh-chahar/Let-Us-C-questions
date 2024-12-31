/* d) According to Gregorian calendar, it was Monday on the date 01/01/01. 
If any year is input through the keyboard write a program 
to find out what is the day on 1st January of this year. */


#include <stdio.h>
#include <time.h>

int main()
{
    // We have given that on 01/01/2001 it is monday.
    int year, leap_year, normal_year, odd_days, count = 0;
    int remiander;

    printf("Enter the year (After 2001) : ");
    scanf("%d", &year);

    int original_year = year;
    year = year - 2001;
    if (year % 4 == 0)
    {
        leap_year = year / 4;
        leap_year = leap_year - 1;
    }
    else
    {
        leap_year = year / 4;
    }
    normal_year = year - leap_year;
    if (year < 0)
    {
        normal_year = normal_year - 1;
    }

    leap_year = leap_year * 2;
    // normal_year = normal_year - 1;
    odd_days = normal_year + leap_year;
    remiander = odd_days % 7;
    count = count + remiander;
    // printf("count == %d\n", count);

    if (count == 0)
    {
        printf("On 01/01/%d it is 'Monday'.", original_year);
    }
    else if (count == 1 || count == (-6))
    {
        printf("On 01/01/%d it is 'Tuesday'.", original_year);
    }
    else if (count == 2 || count == (-5))
    {
        printf("On 01/01/%d it is 'Wednesday'.", original_year);
    }
    else if (count == 3 || count == (-4))
    {
        printf("On 01/01/%d it is 'Thursday'.", original_year);
    }
    else if (count == 4 || count == (-3))
    {
        printf("On 01/01/%d it is 'Friday'.", original_year);
    }
    else if (count == 5 || count == (-2))
    {
        printf("On 01/01/%d it is 'Saturday'.", original_year);
    }
    else if (count == 6 || count == (-1))
    {
        printf("On 01/01/%d it is 'Sunday'.", original_year);
    }
    else
    {
        printf("Something went Wrong!");
    }

    return 0;
}