/* f) Write a program for a matchstick game being played between the computer
and a user. Your program should ensure that the computer always wins. Rules
for the game are as follows:
- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game. */

#include <stdio.h>

int main()
{
    int comp_choice, user_choice, sum = 0;

    while (sum <= 21)
    {
        if (sum == 20)
        {
            user_choice = 1;
        }
        else
        {
            printf("User enter your choice (1, 2, 3, 4) : ");
            scanf("%d", &user_choice);
        }

        printf("You choosed : %d\n", user_choice);
        if (user_choice >= 1 && user_choice <= 4)
        {
            sum = sum + user_choice;
            printf("The sum is : %d\n", sum);
            if (sum == 21)
            {
                printf("You choosed at last hence you loose.\n");
                break;
            }
            comp_choice = 5 - user_choice;
            printf("Computer choosed : %d\n", comp_choice);
            sum = sum + comp_choice;
            printf("The sum is : %d\n", sum);
            if (sum == 21)
            {
                printf("Computer choosed at last hence computer loose.\n");
                break;
            }
        }
    }

    return 0;
}