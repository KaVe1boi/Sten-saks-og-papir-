#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int playerScore = 0;
    int computerScore = 0;

    printf("Welcome to Rock, Paper, Scissors (Best of 3)!\n");

    for (int round = 1; round <= 3; round++) {
        int computerChoice = rand() % 3;
        int playerChoice;

        printf("Round %d\n", round);
        printf("0 - Rock, 1 - Scissors, 2 - Paper\n");
        printf("Choose your move: ");
        scanf("%d", &playerChoice);

        if (playerChoice < 0 || playerChoice > 2) {
            printf("Invalid choice. Round is canceled.\n");
            continue;
        }

        printf("You chose ");
        switch (playerChoice) {
            case 0:
                printf("Rock.\n");
                break;
            case 1:
                printf("Scissors.\n");
                break;
            case 2:
                printf("Paper.\n");
                break;
        }

        printf("Computer chose ");
        switch (computerChoice) {
            case 0:
                printf("Rock.\n");
                break;
            case 1:
                printf("Scissors.\n");
                break;
            case 2:
                printf("Paper.\n");
                break;
        }

        // Determine the winner of the round
        if (playerChoice == computerChoice) {
            printf("It's a tie!\n");
        } else if ((playerChoice == 0 && computerChoice == 1) ||
                   (playerChoice == 1 && computerChoice == 2) ||
                   (playerChoice == 2 && computerChoice == 0)) {
            printf("You win this round!\n");
            playerScore++;
        } else {
            printf("Computer wins this round.\n");
            computerScore++;
        }
    }

    printf("Game Over\n");
    printf("Player's Score: %d\n", playerScore);
    printf("Computer's Score: %d\n", computerScore);

    if (playerScore > computerScore) {
        printf("Congratulations, you win the game!\n");
    } else if (playerScore < computerScore) {
        printf("Computer wins the game. Better luck next time!\n");
    } else {
        printf("The game ends in a tie.\n");
    }

    return 0;  // The program ran without errors
}
