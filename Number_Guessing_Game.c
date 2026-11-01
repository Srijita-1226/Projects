/* NUMBER GUESSING GAME */
// Here you get 10 chances to guess the number choosen.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int secret;
    int num, i;
    char ch;
    
    // Initialize the random number generator. This helps generate different numbers in different rounds. 
    srand(time(NULL));

    do
    {
        // Generate a new number for each round between 1 and 100
        secret = (rand() % 100) + 1;

        printf("====================================\n");
        printf("       NUMBER GUESSING GAME         \n");
        printf("====================================\n");

        printf("\n");
        printf("Welcome to the game!\n");
        printf("\n");
        printf("Guess a number between 1 and 100.\n");

        // The for loop gives the player 10 attempts.
        for (i = 1; i<=10; i++)
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

            // Display the attempt details after an incorrect guess.
            if (i<10)
            {
                printf("\n------------------------------\n");
                printf("Attempt number : %d\n", i);
                printf("Chances left   : %d\n", 10 - i);
                printf("------------------------------\n");
            }
        }

        // If i becomes 11, all 10 attempts were used.
        if (i == 11)
        {
            printf("\n====================================\n");
            printf("              GAME OVER              \n");
            printf("====================================\n");
            printf ("You have used all your attempts :(");
            printf("The correct number was %d\n", secret);
            printf("Better luck next time!\n");

        }

        } while (secret!=num);
    
    return 0;
}