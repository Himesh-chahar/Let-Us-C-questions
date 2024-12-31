/* j) Given three points (x1, y1), (x2, y2) and (x3, y3), 
write a program to check if all the three points fall on one straight line. */


#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x3, y1, y2, y3;

    printf("Enter the values of (x1, y1) : ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the values of (x2, y2) : ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the values of (x3, y3) : ");
    scanf("%f %f", &x3, &y3);

    printf("(x1, y1) = (%.2f, %.2f)\n", x1, y1);
    printf("(x2, y2) = (%.2f, %.2f)\n", x2, y2);
    printf("(x3, y3) = (%.2f, %.2f)\n", x3, y3);

    float x_sqr1, x_sqr2, x_sqr3, y_sqr1, y_sqr2, y_sqr3;
    float xy1_sum, xy2_sum, xy3_sum;
    float dist1, dist2, dist3;

    x_sqr1 = pow((x2 - x1), 2.0);
    x_sqr2 = pow((x3 - x2), 2.0);
    x_sqr3 = pow((x3 - x1), 2.0);
    y_sqr1 = pow((y2 - y1), 2.0);
    y_sqr2 = pow((y3 - y2), 2.0);
    y_sqr3 = pow((y3 - y1), 2.0);

    xy1_sum = x_sqr1 + y_sqr1;
    xy2_sum = x_sqr2 + y_sqr2;
    xy3_sum = x_sqr3 + y_sqr3;

    dist1 = pow(xy1_sum, 0.5);
    dist2 = pow(xy2_sum, 0.5);
    dist3 = pow(xy3_sum, 0.5);

    if ((dist1 + dist2) == dist3)
    {
        printf("All the three points lie on the same line.\n");
    }
    else if ((dist1 + dist3) == dist2)
    {
        printf("All the three points lie on the same line.\n");
    }
    else if ((dist2 + dist3) == dist1)
    {
        printf("All the three points lie on the same line.\n");
    }
    else
    {
        printf("The three points didn't lie on the same line.\n");
    }
    
    return 0;
}