
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses;
    char playAgain;

    do
    {
        nguesses = 1; // Reset the number of guesses for each new game

        // Set the seed for the random number generator
        srand(time(0));
        number = rand() % 100 + 1; // Generate a random number between 1 and 100

        // Welcome message
        printf("**********************************************************\n");
        printf("*           Welcome to the Number Guessing Game!         *\n");
        printf("**********************************************************\n\n");

        printf("I have selected a number between 1 and 100.\n");
        printf("Can you guess what it is? Let's find out!\n\n");

        // Keep running the loop until the number is guessed
        do
        {
            printf("__________________________________________________________\n");
            printf("Guess the number between 1 to 100: ");
            scanf("%d", &guess);

            if (guess > number)
            {
                printf("Too high! Try a lower number.\n");
            }
            else if (guess < number)
            {
                printf("Too low! Try a higher number.\n");
            }
            else
            {
                printf("\n**********************************************************\n");
                printf("*        Congratulations! You guessed it right!          *\n");
                printf("*        You found the number in %d attempts!            *\n", nguesses);
                printf("**********************************************************\n");
            }

            nguesses++;

        } while (guess != number);

        // Ask the user if they want to play again
        printf("\nWould you like to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThanks for playing! See you next time.\n");

    return 0;
}

