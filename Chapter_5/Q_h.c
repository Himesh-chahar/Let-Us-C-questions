/* h) Write a program to receive an integer and find its octal equivalent.
(Hint: To obtain octal equivalent of an integer, divide it continuously by 8 
till dividend doesn't become zero, then write the remainders obtained in reverse direction.) */


#include <stdio.h>
#include <math.h>

int main()
{
    int num, count = 0, remainder;
    float half_octal = 0, i = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 8;
        num /= 8;
        half_octal = half_octal + remainder*(pow(10.0, i));
        i++;
    }

    printf("%.0f", half_octal);

    return 0;
}