/* c) If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle. */


#include <stdio.h>
#include <math.h>

int main()
{
    float side1, side2, side3;

    printf("Enter the side1 of the triangle (in cm) : ");
    scanf("%f", &side1);
    printf("Enter the side2 of the triangle (in cm) : ");
    scanf("%f", &side2);
    printf("Enter the side3 of the triangle (in cm) : ");
    scanf("%f", &side3);

    float semi_perm = (side1 + side2 + side3) / 2;
    float area_half = semi_perm * (semi_perm - side1) * (semi_perm - side2) * (semi_perm - side3);

    float final_area = pow(area_half, 0.5);

    printf("The area of the triangle is : %.2f sq. cm", final_area);

    return 0;
}