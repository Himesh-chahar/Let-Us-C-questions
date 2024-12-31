/* e) The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle. */


#include<stdio.h>

int main()
{
    float length, breadth, radius;

    printf("Enter the length and breadth of the rectangle (in cm) : ");
    scanf("%f %f", &length, &breadth);

    printf("The Area of the rectangle : %.2f sq. cm\n", (length*breadth));
    printf("The perimeter of the rectangle : %.2f cm\n", (2*(length+breadth)));

    printf("ENter the radius of the circle : ");
    scanf("%f", &radius);

    printf("The Area of the circle is : %.2f sq. cm\n", (3.14*radius*radius));
    printf("The perimeter of the circle is : %.2f cm\n", (2*3.14*radius));

    return 0;
}