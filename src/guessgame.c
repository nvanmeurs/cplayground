#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed generator
    srand((unsigned int)time(NULL));

    // Generate random number between 1 and 100
    int secret_number = (rand() % 101) + 1;

    int guess;

    while (guess != secret_number)
    {
        printf("Guess the secret number: ");

        scanf("%d", &guess);

        if (guess > secret_number)
        {
            printf("Too high, please try again..\n");
        }
        else if (guess < secret_number)
        {
            printf("Too low. please try again..\n");
        }
    }

    printf("You win!\n");

    return 0;
}