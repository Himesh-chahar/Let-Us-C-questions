/* d) If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles, 
equilateral, scalene or right angled triangle. */


#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter the side1 of the triangle (in cm) : ");
    scanf("%d", &side1);
    printf("Enter the side2 of the triangle (in cm) : ");
    scanf("%d", &side2);
    printf("Enter the side1 of the triangle (in cm) : ");
    scanf("%d", &side3);

    int side1_sqr, side2_sqr, side3_sqr;

    side1_sqr = side1 * side1;
    side2_sqr = side2 * side2;
    side3_sqr = side3 * side3;

    if (((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2))
    {
        printf("The triangle is a valid triangle.\n");
        if ((side1 == side2) || (side2 == side3) || (side1 == side3))
        {
            if ((side1_sqr + side2_sqr == side3_sqr) || (side2_sqr + side3_sqr == side1_sqr) || (side1_sqr + side3_sqr == side2_sqr))
            {
                printf("The given triangle is an isosceles as well as a right angled triangle.");
            }
            else
            {
                printf("The given triangle is an isosceles trinagle.");
            }
        }
        else if ((side1 == side2 == side3))
        {
            printf("The given triangle is an equilateral triangle.\n");
        }
        else if (side1 != side2 != side3)
        {
            if ((side1_sqr + side2_sqr == side3_sqr) || (side2_sqr + side3_sqr == side1_sqr) || (side1_sqr + side3_sqr == side2_sqr))
            {
                printf("The given triangle is scalene as well as a right angled triangle.");
            }
            else
            {
                printf("The given triangle is a scalene triangle.");
            }
        }
        else if ((side1_sqr + side2_sqr == side3_sqr) || (side2_sqr + side3_sqr == side1_sqr) || (side1_sqr + side3_sqr == side2_sqr))
        {
            printf("The given triangle is a right angled triangle.");
        }
    }
    else
    {
        printf("The triangle is not a valid triangle.\n");
    }

    return 0;
}