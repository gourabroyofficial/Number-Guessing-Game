# Number Guessing Game

This is a simple number guessing game implemented in C. The game randomly selects a number between 1 and 100, and the player has to guess the number. After each guess, the game provides hints to help the player adjust their guess. The game continues until the correct number is guessed, and the player is informed of the number of attempts it took. The player is then given the option to play again or exit.

## How to Play

1. The game starts by generating a random number between 1 and 100.
2. The player is prompted to guess the number.
3. After each guess:
   - If the guess is too high, the game will prompt: "Too high! Try a lower number."
   - If the guess is too low, the game will prompt: "Too low! Try a higher number."
   - If the guess is correct, the game will display a congratulatory message with the number of attempts.
4. After guessing the correct number, the player is asked if they want to play again.
   - Enter `y` or `Y` to play again.
   - Enter `n` or any other key to exit the game.
5. The game ends with a thank-you message if the player chooses not to play again.

## Example Output

```
**********************************************************
*           Welcome to the Number Guessing Game!         *
**********************************************************

I have selected a number between 1 and 100.
Can you guess what it is? Let's find out!

__________________________________________________________
Guess the number between 1 to 100: 50
Too low! Try a higher number.
__________________________________________________________
Guess the number between 1 to 100: 75
Too high! Try a lower number.
__________________________________________________________
Guess the number between 1 to 100: 65
Too high! Try a lower number.
__________________________________________________________
Guess the number between 1 to 100: 60
Too low! Try a higher number.
__________________________________________________________
Guess the number between 1 to 100: 63

**********************************************************
*        Congratulations! You guessed it right!          *
*        You found the number in 5 attempts!             *
**********************************************************

Would you like to play again? (y/n): n

Thanks for playing! See you next time.

