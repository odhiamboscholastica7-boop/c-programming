/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:Program to display a number guessing game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    // Seed random number generator
    srand(time(0));
    secret = (rand() % 20) + 1; // Random number between 1 and 20

    printf("Guess the number (between 1 and 20):\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secret);

    return 0;
}