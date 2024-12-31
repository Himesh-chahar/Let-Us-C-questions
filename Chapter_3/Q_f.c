/* f) If ages of Ram, Shyam and Ajay are input through the keyboard,
 write a program to determine the youngest of the three. */


#include<stdio.h>

int main()
{
    int ram_age, shyam_age, ajay_age;

    printf("Enter the age of ram : ");
    scanf("%d", &ram_age);
    printf("Enter the age of shyam : ");
    scanf("%d", &shyam_age);
    printf("Enter the age of ram : ");
    scanf("%d", &ajay_age);

    if (ram_age<shyam_age && ram_age<ajay_age )
    {
        printf("Ram is the youngest.");
    }
    else if (shyam_age<ram_age && shyam_age<ajay_age)
    {
        printf("Shyam is the youngest.");
    }
    else
    {
        printf("Ajay is the youngest.");
    }

    return 0;
}