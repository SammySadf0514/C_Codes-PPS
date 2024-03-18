#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int secretNumber, guess, chances = 3;

    srand(time(NULL));

    secretNumber = rand() % 10 + 1;

    printf("Welcome to the Number Guessing Game!\n");

    while (chances > 0) {
        printf("Guess the number (1-10): ");
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number.\n");
            break;
        } else {
            printf("Incorrect guess. Chances left: %d\n", --chances);
        }
    }

    if (chances == 0) {
        printf("Sorry, you've run out of chances. The correct number was %d.\n", secretNumber);
    }

    

    return 0;
}