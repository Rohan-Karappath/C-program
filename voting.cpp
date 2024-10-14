#include <stdio.h>

int main() {
    int candidate1Votes = 0, candidate2Votes = 0, candidate3Votes = 0;
    int totalVotes = 0;
    char choice;

    printf("Welcome to the Voting System!\n");

    while (1) {
        printf("\nChoose your candidate (1, 2, 3, or 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        if (choice == 1) {
            candidate1Votes++;
        } else if (choice == 2) {
            candidate2Votes++;
        } else if (choice == 3) {
            candidate3Votes++;
        } else {
            printf("Invalid choice. Please enter 1, 2, 3, or 0.\n");
        }

        totalVotes++;
    }

    printf("\nVoting has ended.\n");
    printf("Total votes: %d\n", totalVotes);
    printf("Candidate 1 votes: %d\n", candidate1Votes);
    printf("Candidate 2 votes: %d\n", candidate2Votes);
    printf("Candidate 3 votes: %d\n", candidate3Votes);

    // Determine the winner
    int winner = 0;
    int maxVotes = 0;

    if (candidate1Votes > maxVotes) {
        winner = 1;
        maxVotes = candidate1Votes;
    }
    if (candidate2Votes > maxVotes) {
        winner = 2;
        maxVotes = candidate2Votes;
    }
    if (candidate3Votes > maxVotes) {
        winner = 3;
        maxVotes = candidate3Votes;
    }

    if (maxVotes == 0) {
        printf("No votes were cast.\n");
    } else {
        printf("Candidate %d is the winner with %d votes!\n", winner, maxVotes);
    }

    return 0;
}
