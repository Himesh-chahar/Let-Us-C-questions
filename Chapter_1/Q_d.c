/* d) Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees. */


#include<stdio.h>

int main()
{
    float temp_ferenhite;

    printf("Enter the temperature in ferehite : ");
    scanf("%f", &temp_ferenhite);

    float temp_centigrade;
    temp_centigrade = (temp_ferenhite - 32)/(1.8);

    printf("%.2f °F = %.2f °C", temp_ferenhite, temp_centigrade);

    return 0;
}