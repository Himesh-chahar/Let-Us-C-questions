/* e) A five-digit number is entered through the keyboard. 
Write a program to obtain the reversed number and to 
determine whether the original and reversed numbers are equal or not. */


#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    int original_num = num;
    int count = 0;

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    printf("no. of digits is : %d\n", count);

    int digit, new_num = original_num;
    float reversed_num = 0;

    for (int i = 1; i <= count; i++)
    {
        digit = original_num % 10;
        original_num /= 10;
        reversed_num = reversed_num + (digit * pow(10.0, (float)(count - i)));
    }

    if ((float)(new_num) == (reversed_num))
    {
        printf("The original number and the reversed number are same.");
    }
    else
    {
        printf("The original number and the reversed number are not same.");
    }

    return 0;
}