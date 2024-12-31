/* h) Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D. */


#include<stdio.h>

int main()
{
    int C, D;

    printf("Enter first number : ");
    scanf("%d", &C);
    printf("Enter second number : ");
    scanf("%d", &D);

    printf("The value of C = %d and D = %d before swapping.\n", C, D);

    int temporary;
    temporary = C;
    C = D;
    D = temporary;

    printf("The value of C = %d and D = %d after swapping.\n", C, D);

    return 0;
}