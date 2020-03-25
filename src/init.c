/*
** EPITECH PROJECT, 2020
** init.c
** File description:
** init.c
*/

#include "../include/main.h"

int init(board_t *board)
{
    board->buffer = NULL;

    fill_board(board);
    write(1, "\n", 1);
    if (game(board) == 1) {
        free_board(board);
        return (1);
    } else if (board->my_return == 1) {
        free_board(board);
        return (0);
    } else {
        free_board(board);
        return (2);
    }
    return (0);
}