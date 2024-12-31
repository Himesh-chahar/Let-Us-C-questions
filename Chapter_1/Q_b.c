/* b) The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters. */


#include <stdio.h>

int main()
{
    float dist_km;

    printf("Enter the distance between the two cities(in km) : ");
    scanf("%f", &dist_km);

    float dist_cm, dist_m, dist_in, dist_ft;

    dist_m = dist_km * (1000.0);
    dist_ft = dist_km * (3280.84);
    dist_in = dist_km * (39370.08);
    dist_cm = dist_km * (100000.0);

    printf("%.2f km = %.2f m\n%.2f km = %.2f ft\n%.2f km = %.2f in\n%.2f km = %.2f cm", dist_km, dist_m, dist_km, dist_ft, dist_km, dist_in, dist_km, dist_cm);

    return 0;
}