#include <stdio.h>

int main()
{
    int secret = 7;
    int guess;

    printf("Number Guessing Game\n");

    do
    {
        printf("Guess a number between 1 and 10: ");
        scanf("%d", &guess);

        if(guess > secret)
        {
            printf("Too High!\n");
        }
        else if(guess < secret)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Congratulations! You guessed the correct number.\n");
        }

    } while(guess != secret);

    return 0;
}