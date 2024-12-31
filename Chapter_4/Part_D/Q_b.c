/* b) If a character is entered through the keyboard, 
write a program to determine whether the character is a 
capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various characters:
Characters            ASCII Values
A-Z                    65-90
a-z                    97-122
0-9                    48-57
special symbols        0-47, 68-64, 91-96, 123-127 */


#include<stdio.h>

int main()
{
    char character;

    printf("Enter any chahrcter : ");
    scanf("%c", &character);

    if (character>=65 && character<=90)
    {
        printf("It is a capital letter of english.");
    }
    else if (character>=97 && character<=122)
    {
        printf("It is a small letter of english.");
    }
    else if (character>=48 && character<=57)
    {
        printf("It is a digit between 0-9.");
    }
    else if ((character>=0 && character<=47) || (character>=58 && character<=64) || (character>=91 && character<=96) || (character>=123 && character<=127))
    {
        printf("It is a special symbol.");
    }

    return 0;
}