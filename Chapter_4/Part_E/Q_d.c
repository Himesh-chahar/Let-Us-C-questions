/* d) Write a program to receive value of an angle in degrees and check whether 
sum of squares of sine and cosine of this angle is equal to 1. */


#include<stdio.h>
#include<math.h>

int main()
{
    float angle;

    printf("Enter the value of angle in degrees : ");
    scanf("%f", &angle);

    angle = (angle * 3.14)/180;

    float sin_sqr = (sin(angle))*(sin(angle));
    float cos_sqr = (cos(angle))*(cos(angle));

    (((sin_sqr + cos_sqr) == 1)?(printf("Yes\n")):(printf("No\n")));

    return 0;
}