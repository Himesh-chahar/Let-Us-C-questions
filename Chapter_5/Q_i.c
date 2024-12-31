/* i) Write a program to find the range of a set of numbers entered through the keyboard. 
Range is the difference between the smallest and biggest number in the list. */


#include <stdio.h>

int main()
{
    int num, max_range, min_range, i = 1, set, range;
    printf("Enter how many numbers you want to enter : ");
    scanf("%d", &set);
    printf("Enter the number : ");
    scanf("%d", &num);

    max_range = num;
    min_range = num;

    while (i <= set)
    {
        printf("Enter the number : ");
        scanf("%d", &num);
        if (num > max_range)
        {
            max_range = num;
        }
        if (num < min_range)
        {
            min_range = num;
        }
        
        i++;
    }

    range = max_range - min_range;

    printf("The max value is : %d\n", max_range);
    printf("The min value is : %d\n", min_range);
    printf("The Range for the set of values is : %d\n", range);

    return 0;
}