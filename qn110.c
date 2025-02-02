#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100: ");
    while(1) {
        scanf("%d", &guess);

        if(guess > number) {
            printf("Too high! Try again: ");
        } else if(guess < number) {
            printf("Too low! Try again: ");
        } else {
            printf("Congratulations! You guessed the correct number.\n");
            break;
        }
    }
    return 0;
}

