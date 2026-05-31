#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int difficulty, maxNumber;
    int secretNumber, guess;
    int attempts = 0;

    srand(time(NULL));

    printf("=== NUMBER GUESSING GAME ===\n\n");

    printf("Select Difficulty:\n");
    printf("1. Easy   (1 - 50)\n");
    printf("2. Medium (1 - 100)\n");
    printf("3. Hard   (1 - 500)\n");
    printf("Choice: ");
    scanf("%d", &difficulty);

    switch (difficulty) {
        case 1:
            maxNumber = 50;
            break;
        case 2:
            maxNumber = 100;
            break;
        case 3:
            maxNumber = 500;
            break;
        default:
            printf("Invalid choice! Using Medium mode.\n");
            maxNumber = 100;
    }

    secretNumber = rand() % maxNumber + 1;

    printf("\nI have selected a number between 1 and %d.\n", maxNumber);
    printf("Can you guess it?\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber)
            printf("Too High!\n\n");
        else if (guess < secretNumber)
            printf("Too Low!\n\n");
        else
            printf("Correct!\n\n");

    } while (guess != secretNumber);

    printf(" ^_^ Congratulations! ^_^\n");
    printf("You guessed the number in %d attempt(s).\n", attempts);

    if (attempts <= 3)
        printf("Rating: Genius!\n");
    else if (attempts <= 7)
        printf("Rating: Excellent!\n");
    else if (attempts <= 12)
        printf("Rating: Good!\n");
    else
        printf("Rating: Keep Practicing!\n");

    return 0;
}