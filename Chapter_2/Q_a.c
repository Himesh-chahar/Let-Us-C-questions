/* a) If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. (Hint: Use the modulus
operator '%') */


#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int original_num = num;
    int count = 0;
    int digit;

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    printf("%d is a %d digit number.\n", original_num, count);

    int sum = 0;
    int new_num = original_num;
    while (original_num != 0)
    {
        digit = original_num % 10;
        original_num /= 10;
        sum = sum + digit;
    }

    printf("The sum of the digits of %d  is %d.\n", new_num, sum);

    return 0;
}