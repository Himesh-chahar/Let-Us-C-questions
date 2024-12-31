/* c) If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is valid or not. 
The triangle is valid if the sum of two sides is greater than the largest of the three sides. */


#include<stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter the side1 of the triangle (in cm) : ");
    scanf("%d", &side1);
    printf("Enter the side2 of the triangle (in cm) : ");
    scanf("%d", &side2);
    printf("Enter the side1 of the triangle (in cm) : ");
    scanf("%d", &side3);

    if (((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2))
    {
        printf("The triangle is a valid triangle.");
    }
    else
    {
        printf("The triangle is not a valid triangle.");
    }

    return 0;
}