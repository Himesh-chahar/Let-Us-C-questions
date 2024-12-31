/* a) Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. 
Assume that employees do not work for fractional part of an hour. */


#include <stdio.h>

int main()
{
    int n = 1;
    int total_employee = 10;
    int no_of_hours;
    int overtime_pay;

    while (n <= total_employee)
    {
        printf("Enter the no of hours Employe(%d) : ", n);
        scanf("%d", &no_of_hours);
        if (no_of_hours > 40)
        {
            no_of_hours = no_of_hours - 40;
            overtime_pay = no_of_hours * 12;
            printf("Overtime pay = $ %d\n", overtime_pay);
        }
        else
        {
            printf("You have not worked overtime.\n");
        }
        
        n++;
    }

    return 0;
}