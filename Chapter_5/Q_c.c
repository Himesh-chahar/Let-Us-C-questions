/* c) Two numbers are entered through the keyboard. 
Write a program to find the value of one number raised to the power of another. */


#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Enter the first number : ");
    scanf("%f", &num1);
    printf("Enter the second number : ");
    scanf("%f", &num2);
    int i = 1;
    float power = 1;

    while (i<=num2)
    {
        power = power * num1;
        i++;
    }
    
    printf("%.2f raised to %.2f is equal to %.2f", num1, num2, power);

    return 0;
}