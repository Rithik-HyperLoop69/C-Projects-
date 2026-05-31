#include <stdio.h>

char board[3][3];
char currentPlayer = 'X';

void initializeBoard() {
    char ch = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ch++;
        }
    }
}

void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2)
            printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return 1;

        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return 1;
    }

    if ((board[0][0] == board[1][1] &&
         board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] &&
         board[1][1] == board[2][0]))
        return 1;

    return 0;
}

int checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] >= '1' && board[i][j] <= '9')
                return 0;
        }
    }
    return 1;
}

void makeMove() {
    int choice;
    int row, col;

    printf("Player %c, enter position (1-9): ", currentPlayer);
    scanf("%d", &choice);

    row = (choice - 1) / 3;
    col = (choice - 1) % 3;

    if (choice < 1 || choice > 9 ||
        board[row][col] == 'X' ||
        board[row][col] == 'O') {
        printf("Invalid move! Try again.\n");
        makeMove();
        return;
    }

    board[row][col] = currentPlayer;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    initializeBoard();

    while (1) {
        displayBoard();
        makeMove();

        if (checkWin()) {
            displayBoard();
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        if (checkDraw()) {
            displayBoard();
            printf("It's a draw!\n");
            break;
        }

        switchPlayer();
    }

    return 0;
}