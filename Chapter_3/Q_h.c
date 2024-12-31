/* h) Write a program to find the absolute value of a number entered through the keyboard. */


#include <stdio.h>

int main()
{
    float num;

    printf("Enter the number : ");
    scanf("%f", &num);

    if (num == 0)
    {
        printf("The absolute value of %.2f is 0.\n", num);
    }
    else if (num > 0)
    {
        printf("The absolute value of %.2f is %.2f.\n", num, num);
    }
    else if (num < 0)
    {
        float new_num = num * (-1);
        printf("The absolute value of %.2f is %.2f", num, new_num);
    }

    return 0;
}