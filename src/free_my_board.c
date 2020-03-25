/*
** EPITECH PROJECT, 2020
** free_my_board.c
** File description:
** free_my_board.c
*/

#include "../include/main.h"

void free_board(board_t *board)
{
    int i = 0;
    while (i <= board->matches + 2) {
        free(board->board[i]);
        i += 1;
    }
    free(board->board);
}