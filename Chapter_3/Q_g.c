/* g) Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees. */


#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;

    printf("Enter the value of angle one : ");
    scanf("%d", &angle1);
    printf("Enter the value of angle two : ");
    scanf("%d", &angle2);
    printf("Enter the value of angle three : ");
    scanf("%d", &angle3);

    int sum_angles = angle1 + angle2 + angle3;

    if (sum_angles==180)
    {
        printf("The triangle is a valid triangle.\n");
    }
    else if (sum_angles>180)
    {
        printf("The sum of the three angles of the triangle is greater than 180 deg so it is not a valid angle.\n");
    }
    else if (sum_angles<180)
    {
        printf("The sum of the three angles of the triangle is lesser than 180 deg so it is not a valid angle.\n");
    }
    else
    {
        printf("Something went wrong!");
    }
    
    return 0;
}