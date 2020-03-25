/*
** EPITECH PROJECT, 2020
** check_win_loose.c
** File description:
** check_win_loose.c
*/

#include "../include/main.h"

int check_if_pipe(board_t *board, int line)
{
    int i = 0;
    int matches = 0;

    while (board->board[line][i] != 0) {
        if (board->board[line][i] == '|')
            matches += 1;
        i += 1;
    }
    return (matches);
}

int game_end(board_t *board)
{
    int i = 0;
    int res = 0;

    while (i <= board->matches) {
        res += check_if_pipe(board, i);
        i += 1;
    }
    if (res == 0)
        return (2);
    return (0);
}