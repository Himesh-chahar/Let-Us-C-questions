/* g) If value of an angle is input through the keyboard, write a program
to print all its Trigonometric ratios. */


#include<stdio.h>
#include<math.h>

int main()
{
    float angle;
    
    printf("Enter the value of angle (in degrees) : ");
    scanf("%f", &angle);

    float sin_ang, cos_ang, tan_ang, cot_ang, sec_ang, cosec_ang;

    sin_ang = sin(angle*(3.14)/180);
    cos_ang = cos(angle*(3.14)/180);
    tan_ang = tan(angle*(3.14)/180);
    cot_ang = 1/(tan(angle*(3.14)/180));
    sec_ang = 1/(cos(angle*(3.14)/180));
    cosec_ang = 1/(sin(angle*(3.14)/180));

    printf("sin(%f) = %f\n", angle, sin_ang);
    printf("cos(%f) = %f\n", angle, cos_ang);
    printf("tan(%f) = %f\n", angle, tan_ang);
    printf("cot(%f) = %f\n", angle, cot_ang);
    printf("sec(%f) = %f\n", angle, sec_ang);
    printf("cosec(%f) = %f\n", angle, cosec_ang);

    return 0;
}