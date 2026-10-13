/* NUMBER GUESSING GAME */
// Here you get 5 chances to guess the number choosen.

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int secret = 7;
    int num, i;

    printf("====================================\n");
    printf("       NUMBER GUESSING GAME         \n");
    printf("====================================\n");

    printf("\n");
    printf("Welcome to the game!\n");
    printf("\n");
    printf("Guess a number between 1 and 10.\n");
    
    for (i = 1; i<=5; i++)
    {
        printf ("Enter your number = ");
        scanf ("%d", &num);

        if (num == secret)
        {
            printf ("\n--------------------------------\n");
            printf ("~~ CONGRATULATIONS ~~\n");
            printf ("Yay !!! You guessed correct.\n");
            printf ("-----------------------------------\n");
            break;
        }

        else if (num < secret )
        {
            printf ("\n[HINT]: Your number is low.\n");
        }

        else
        {
            printf ("\n[HINT]: Your number is high.\n");
        }

        if (i<5)
        {
            printf("\n------------------------------\n");
            printf("Attempt number : %d\n", i);
            printf("Chances left   : %d\n", 5 - i);
            printf("------------------------------\n");
        }
    }

    if (i == 6)
    {
        printf("\n====================================\n");
        printf("              GAME OVER              \n");
        printf("====================================\n");
        printf("The correct number was %d.\n", secret);
        printf("Better luck next time!\n");
    }

    printf("\nThanks for playing!\n\n");

    return 0;
}