/* e) Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 =(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) */


#include <stdio.h>
#include <math.h>

int main()
{
    for (int j = 1; j <= 500; j++)
    {
        int num, count = 0;
        num = j;
        int original_num = num;

        while (num != 0)
        {
            num /= 10;
            count++;
        }

        int digit, i = 1, new_num;
        float sum = 0;
        new_num = original_num;

        while (i <= count)
        {
            digit = original_num % 10;
            original_num /= 10;
            sum = sum + pow((float)(digit), count);
            i++;
        }

        if ((int)(sum) == new_num)
        {
            printf("%d, ", new_num);
        }
        j = new_num;
    }

    return 0;
}