/*
** EPITECH PROJECT, 2020
** print_map.c
** File description:
** print_map.c
*/

#include "../include/main.h"

void print_my_map(board_t *board)
{
    for (int j = 0; j <= board->matches + 1; j += 1) {
        my_putstr(board->board[j]);
    }
}