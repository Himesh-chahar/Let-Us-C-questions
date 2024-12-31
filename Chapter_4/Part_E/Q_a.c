/* a) Using conditional operators determine:
(1) Whether the character entered through the keyboard is a lower case alphabet or not.
(2) Whether a character entered through the keyboard is a special symbol or not. */


#include<stdio.h>

int main()
{
    char character;
    
    printf("Enter any english alphbet : ");
    scanf("%c", &character);

    ((character>=97 && character<=122) ? (printf("Lower case letter.\n")) : (printf("Not a lower case letter.\n")));

    char character1;
    
    printf("Enter any special symbol : ");
    scanf(" %c", &character1);

    (((character1>=0 && character1<=47) || (character1>=58 && character1<=64) || (character1>=91 && character1<=96) || (character1>=123 && character1<=127)) ? (printf("It is a special symbol.\n")) : (printf("It is not a special symbol.\n")));

    return 0;
}