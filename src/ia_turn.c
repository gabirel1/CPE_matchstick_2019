/*
** EPITECH PROJECT, 2020
** ia_turn.c
** File description:
** ia_turn.c
*/

#include "../include/main.h"

void removed_by_ia(board_t *board, int line)
{
    int i = 0;
    board->ia_removed = 0;

    while (board->board[line][i] != 0)
        i += 1;
    while (board->board[line][i] != '|')
        i += -1;
    while (board->ia_removed < 1) {
        board->board[line][i] = ' ';
        i += -1;
        board->ia_removed += 1;
    }
}

int check_line(board_t *board, int line)
{
    int i = 0;
    board->nb_matches = 0;

    while (board->board[line][i] != 0) {
        if (board->board[line][i] == '|')
            board->nb_matches += 1;
        i += 1;
    }
    if (board->nb_matches >= 1) {
        removed_by_ia(board, line);
        return (-12);
    }
    return (0);
}