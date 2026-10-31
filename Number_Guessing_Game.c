/* NUMBER GUESSING GAME */
// Here you get 5 chances to guess the number choosen.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int secret;
    int num, i;
    char c;
    
    // Seed the random number generator once
    srand(time(NULL));

    do
    {
        // Generate a new number for each round
        secret = rand() % 10 + 1;

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

            printf ("\nDo you want to play another round (Y/N)?");
            scanf(" %c", &c);
        }
            
        } while (c == 'Y' || c == 'N');
    
    return 0;
}