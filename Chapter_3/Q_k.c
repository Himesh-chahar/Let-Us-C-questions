/* k) Given the coordinates (x, y) of center of a circle and its radius,
write a program that will determine whether a point lies inside the circle,
on the circle or outside the circle. (Hint: Use sqrt() and pow() functions). */


#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, radius;

    printf("Enter the points of the radius of the circle (x, y) : ");
    scanf("%f %f", &x, &y);
    printf("Enter the radius of the circle (in cm) : ");
    scanf("%f", &radius);

    printf("(x, y) = (%.2f, %.2f)\n", x, y);
    printf("Radius = %.2f cm\n", radius);

    float x1, y1;

    printf("Enter the point you want to check (x1, y1) : ");
    scanf("%f %f", &x1, &y1);

    float x_sqr, y_sqr, xy_sum, dist;

    x_sqr = pow((x1 - x), 2.0);
    y_sqr = pow((y1 - y), 2.0);

    xy_sum = x_sqr + y_sqr;

    dist = pow((xy_sum), 0.5);

    if (dist > radius)
    {
        printf("The point (%.2f, %.2f) lies outside the circle.", x1, y1);
    }
    else if (dist < radius)
    {
        printf("The point (%.2f, %.2f) lies inside the circle.", x1, y1);
    }
    else if (dist == radius)
    {
        printf("The point (%.2f, %.2f) lies on the circle.", x1, y1);
    }

    return 0;
}