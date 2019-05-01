// Tic Tac Toe solo version
// only problem is users can put in more than 9 as a selection. maybe fix with a while loop?
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    /* Variables */
    char player = 'a';      // for players
    bool win = false;       // for winner or loser
    int turn = 0;           // for player turn
    int select = 0;

    char board[5][5] = {{'1', '|', '2', '|', '3'},        // "board is just the 1 - 9 on a 3x3 layout
                        {'--', '--', '--', '--', '--'},
                        {'4', '|', '5', '|', '6'},
                        {'--', '--', '--', '--', '--'},
                        {'7', '|', '8', '|', '9'}};

    /* Instructions */
    printf("TIC TAC TOE\n\n");
    printf("Two players representing X and O take alternating turns starting with X.\n"
           "On your turn, select a number 1-9 of where you want to put your symbol.\n"
           "If a player creates a horizontal, vertical, or diagonal line, they win!\n"
           "If no player completes a line after ever numbered spot is selected, the game ends with a draw.\n\n");

    for (int t = 0; t < 9; ++t)
    {
    /*alternating players */
        turn = t % 2;                                                               // set's turn to 0 or 1
        player = turn == 1? 'O':'X';                                                // conditional to determine which symbol to use

    /* Print the board */
        finalshow:
        printf("\n");
        for (unsigned int n = 0; n < sizeof(board)/sizeof(board[0]); ++n)           // for board rows
        {
            for(unsigned int x = 0; x < sizeof(board[0])/sizeof(board[0][0]); ++x)  // for board columns
                printf("%c ", board[n][x]);                                         // print each element
            printf("\n");
        }
        if (win == true)                                                            // Placing goto end here so it prints the result one more time.
            goto end;

        printf("\nturn %d: %c player's turn\n", t+1, player);                       // Shows who's turn it is.
        scanf(" %c", &select);                                                      // player selects which number to pick

    /* Take input and assign to number */
        for (unsigned int n = 0; n < sizeof(board)/sizeof(board[0]); ++n)           // for board rows
        {
            for(unsigned int x = 0; x < sizeof(board[0])/sizeof(board[0][0]); ++x)  // for board columns
                if (select == board[x][n])                                          // when they find the number input...
                    board[x][n] = player;                                           // ...change it to the current symbol
        }

    /* Check if win condition met */
        for (unsigned int x = 0; x <sizeof(board)/sizeof(board[0]); ++x)            // just need to check the elements once for each section
        {
            if ((board[0][x] == 'X' && board[2][x] == 'X' && board[4][x] == 'X')||  // vertical line win check
                (board[x][0] == 'X' && board[x][2] == 'X' && board[x][4] == 'X')||  // horizontal line win check
                (board[0][0] == 'X' && board[2][2] == 'X' && board[4][4] == 'X')||  // decreasing angle win check
                (board[0][4] == 'X' && board[2][2] == 'X' && board[4][0] == 'X'))   // increasing angle win check
            {
                printf("\nplayer X is the winner!");                                // announce X as winner run loop again
                win = true;
                goto finalshow;
            }
            if ((board[0][x] == 'O' && board[2][x] == 'O' && board[4][x] == 'O')||  // vertical line win check
                (board[x][0] == 'O' && board[x][2] == 'O' && board[x][4] == 'O')||  // horizontal line win check
                (board[0][0] == 'O' && board[2][2] == 'O' && board[4][4] == 'O')||  // decreasing angle win check
                (board[0][4] == 'O' && board[2][2] == 'O' && board[4][0] == 'O'))   // increasing angle win check
            {
                printf("\nplayer O is the winner!");                                // announce O as winner run loop again
                win = true;
                goto finalshow;
            }
        }
    }
    printf("It's a draw!");                                                         // if win is not met before for outer most for loop completes
    end:
    return 0;
}
