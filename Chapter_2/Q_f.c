/* f) Wind chill factor is the felt air temperature on exposed skin due to
wind. The wind chill temperature is.always lower than the air
temperature, and is calculated as per the following formula:
wcf = 35.74 + 0.6215t + (0.4275t -35.75 ) * vo^16
where t is the temperature and v is the wind velocity. Write a
program to receive values of t and v and calculate wind chill factor
(wcf). */


#include <stdio.h>
#include <math.h>

int main()
{
    float t, v;

    printf("Enter the value of temperature (in ferenhite) : ");
    scanf("%f", &t);
    printf("Enter the value of velocity (in m/s) : ");
    scanf("%f", &v);

    double wcf;

    wcf = 35.74 + (0.6215 * t) + ((0.427 * t) - 35.75)*pow(v, 0.16);

    printf("The wind chill factor is : %.2lf °F", wcf);

    return 0;
}