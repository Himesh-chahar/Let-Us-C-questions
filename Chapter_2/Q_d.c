/* d) Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r, ọ).
Hint: r=sqrt (x?+y?)ando-tan"(y/x) */

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;

    printf("Enter the cartesian co-ordinates of the point : ");
    scanf("%lf %lf", &x, &y);

    printf("The cartesion co-ordinates of the point are (%.2lf, %.2lf)\n", x, y);

    double r, w;
    double r_half1 = pow(x, 2.0);
    double r_half2 = pow(y, 2.0);
    double r_full = r_half1 + r_half2;

    r = pow(r_full, 0.5);
    w = (atan(y / x)) * 180 / (3.14);

    printf("The polar co-ordinates of the cartesion co-ordinate (%.2lf, %.2lf) is (%.2lf, %.2lf)", x, y, r, w);

    return 0;
}