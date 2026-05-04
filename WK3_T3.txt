#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess;
    srand(time(NULL)); // Seed random number
    secret = rand() % 100 + 1; // here we collect from 1 to 100

    printf("Guess 1: ");
    scanf("%d", &guess);

    if (guess == secret) {
        printf("Correct!\n");
    } else {
        if (guess < secret) printf("Too low. "); else printf("Too high. ");
        printf("Guess 2: ");
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Correct!\n");
        } else {
            if (guess < secret) printf("Too low. "); else printf("Too high. ");
            printf("Guess 3 (Final): ");
            scanf("%d", &guess);

            if (guess == secret) printf("Correct!\n");
            else printf("Game over. The number was %d\n", secret);
        }
    }
    return 0;
}