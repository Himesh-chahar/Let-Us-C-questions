/* b) Write a program using conditional operators to 
determine whether a year entered through the keyboard is a leap year or not. */


#include<stdio.h>

int main()
{
    int year;

    printf("Enter a year : ");
    scanf("%d", &year);

    (((year%100==0 && year%400==0) || (year%100!=0 && year%4==0))?(printf("The year is leap year.\n")):(printf("The year is not a leap year.")));

    return 0;
}