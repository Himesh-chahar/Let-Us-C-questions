/* e) Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the
distance (D) between them in nautical miles. The formula for
distance in nautical miles is:
D=3963 cos (sin L1 sin L2 + cos L1 cos L2 * cos (G2-G1)) */


#include <stdio.h>
#include <math.h>

int main()
{
    float L1, L2, G1, G2;

    printf("Enter the latitudes of the two places : ");
    scanf("%f %f", &L1, &L2);
    printf("Enter the longitudes of the two places : ");
    scanf("%f %f", &G1, &G2);

    L1 = (L1*3.14)/180.0;
    L2 = (L2*3.14)/180.0;
    G1 = (G1*3.14)/180.0;
    G2 = (G2*3.14)/180.0;

    printf("The latitudes in radians is (%f, %f)\n", L1, L2);
    printf("The longitudes in radians is (%f, %f)\n", G1, G2);

    double dist;

    dist = 3440*(acos((sin(L1) * sin(L2)) + (cos(L1) * cos(L2) * cos(G2 - G1))));

    printf("The distance between the two palces in Nautical miles is : %.2lf NM\n", dist);

    return 0;
}
