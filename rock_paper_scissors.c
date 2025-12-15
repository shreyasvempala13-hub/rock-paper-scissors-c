#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int user_choice, computer_choice;

    // Seed random number generator
    srand(time(0));

    printf("Rock Paper Scissors Game\n");

    // Keep asking until user enters valid choice
    do {
        printf("Enter your choice:\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        scanf("%d", &user_choice);

        if (user_choice < 1 || user_choice > 3) {
            printf("Invalid choice! Please enter 1, 2, or 3.\n\n");
        }

    } while (user_choice < 1 || user_choice > 3);

    // Computer generates random choice between 1–3
    computer_choice = (rand() % 3) + 1;

    // Show computer's choice
    printf("Computer chose: ");
    if (computer_choice == 1)
        printf("Rock\n");
    else if (computer_choice == 2)
        printf("Paper\n");
    else
        printf("Scissors\n");

    // Decide the winner
    if (user_choice == computer_choice) {
        printf("It's a Draw!\n");
    }
    else if ((user_choice == 1 && computer_choice == 3) ||
             (user_choice == 2 && computer_choice == 1) ||
             (user_choice == 3 && computer_choice == 2)) {
        printf("You Win!\n");
    }
    else {
        printf("Computer Wins!\n");
    }

    return 0;
}
