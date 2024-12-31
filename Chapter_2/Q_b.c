/* b) If a five-digit number is input through the keyboard, write a
program to reverse the number. */


#include <stdio.h>
#include <math.h>

int main()
{
    int num, count = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    int original_num = num;
    double reversed_num = 0;
    int digit;

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    printf("%d is a %d digit number.\n", original_num, count);

    for (int i = 1; i <= count; i++)
    {
        digit = original_num % 10;
        original_num /= 10;
        reversed_num = reversed_num + (digit * (pow(10.0, (float)(count - i))));
    }

    printf("The revered number is : %.0lf", reversed_num);

    return 0;
}