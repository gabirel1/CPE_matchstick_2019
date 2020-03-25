/*
** EPITECH PROJECT, 2020
** remove_matches.c
** File description:
** remove_matches.c
*/

#include "../include/main.h"

void remove_matches(board_t *board)
{
    int i = 0;
    int index = board->nb_of_stars;

    while (board->board[board->entry1][index] != '|')
        index += -1;
    while (i < board->entry2) {
        board->board[board->entry1][index] = ' ';
        i += 1;
        index += -1;
    }
}