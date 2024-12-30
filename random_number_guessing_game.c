#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    //printf("Random Number: %d\n", randomNumber);

    // do
    // {
    //     printf("Guess the number:\n");
    //     scanf("%d", &guessed);
    //     if (guessed>randomNumber)
    //     {
    //         printf("Lower Number please!\n");
    //     }else{
    //         printf("Higher number please!\n");
    //     }
    //     no_of_guesses++;
    // } while (guessed != randomNumber);



    while (guessed != randomNumber)
    {
        printf("Guess the number!\n");
        scanf("%d", &guessed);
        if (guessed>randomNumber)
        {
            printf("Lower the number\n");
        }else{
            printf("Higher the number\n");
        }
        no_of_guesses++;
    }
    

    printf("You guessed the number in %d\n", no_of_guesses);

    return 0;
}