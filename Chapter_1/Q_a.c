/* a) Ramesh's basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary. */


#include <stdio.h>

int main()
{
    float basic_salary;
    printf("Enter your basic salary : $");
    scanf("%f", &basic_salary);

    float da = 0.4 * basic_salary;
    float hra = 0.2 * basic_salary;

    float gross_salary = basic_salary + da + hra;
    printf("Your Gross Salary is : $%.2f\n", gross_salary);

    return 0;
}