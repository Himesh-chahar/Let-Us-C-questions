/* b) Any integer is input through the keyboard. 
Write a program to find out whether it is an odd number or even number. */


#include<stdio.h>

int main()
{
    int num;

    printf("Enter any integer : ");
    scanf("%d", &num);

    if (num%2==0)
    {
        printf("The number %d is Even number.\n", num);
    }
    else
    {
        printf("The number %d is Odd number.\n", num);
    }
    
    return 0;
}