/* g) The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms)
to the square of the height (in meters). 
Write a program that receives weight and height, calculates the BMI, 
and reports the BMI category as per the following table:
BMI Category                     BMI
Starvation                       <15
Anorexic                         15.1 to 17.5
Underweight                      17.6 to 18.5 
Ideal                            18.6 to 24.9
Overweight                       25 to 25.9
Obese                            26 to 30.9
Morbidly Obese                   >=40 */


#include <stdio.h>

int main()
{
    float weight, height;

    printf("Enter the weight (in kg) : ");
    scanf("%f", &weight);
    printf("Enter the height (in m) : ");
    scanf("%f", &height);

    float bmi_ind;
    bmi_ind = (weight) / (height * height);

    if (bmi_ind<15)
    {
        printf("Starvation\n");
    }
    else if (bmi_ind>=15.1 && bmi_ind<=17.5)
    {
        printf("Anorexic\n");
    }
    else if (bmi_ind>=17.6 && bmi_ind<=18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi_ind>=18.6 && bmi_ind<=24.9)
    {
        printf("Ideal\n");
    }
    else if (bmi_ind>=25 && bmi_ind<=25.9)
    {
        printf("Overweight");
    }
    else if (bmi_ind>=26 && bmi_ind<=30.9)
    {
        printf("Obese\n");
    }
    else if (bmi_ind>=40)
    {
        printf("Morbidly Obese\n");
    }
    else
    {
        printf("Something went wrong!");
    }
    
    return 0;
}