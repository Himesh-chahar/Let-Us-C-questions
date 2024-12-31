/* b) Write a program to find the factorial value of any number entered through the keyboard. */


#include<stdio.h>

int main()
{
    int num, fact = 1, i = 1;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (num<0)
    {
        printf("Enter a whole number only.\n");
    }
    else if (num>=0)
    {
        while (i<=num)
        {
            fact = fact * i;
            i++;
        }
        printf("The factorial of the number %d is %d", num, fact);
        
    }
    
    return 0;
}