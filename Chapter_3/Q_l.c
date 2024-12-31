/* l) Given a point (x, y), write a program to find out if it lies 
on the X-axis, Y-axis or on the origin. */


#include <stdio.h>

int main()
{
    float x, y;

    printf("Enter the points of the radius of the circle (x, y) : ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The point (%.2f, %.2f) lies on the origin.", x, y);
        
    }
    else if (y == 0)
    {
        printf("The point (%.2f, %.2f) lies on X-axis.", x, y);
    }
    else if (x == 0)
    {
        printf("The point (%.2f, %.2f) lies on Y-axis.", x, y);
    }
    else
    {
        printf("The point (%.2f, %.2f) lies on an arbitary location.", x, y);
    }

    return 0;
}