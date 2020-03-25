/*
** EPITECH PROJECT, 2020
** line_matches_handling.c
** File description:
** line_matches_handling.c
*/

#include "../include/main.h"

void print_error(board_t *board, int which)
{
    if (which == 0) {
        write(1, "Error: you cannot remove more than ", 35);
        my_put_nbr(board->nb_max);
        write(1, " matches per turn\n", 18);
    }
    if (which == 1)
        write(1, "Error: you have to remove at least one match\n", 45);
}

int line_handling(board_t *board)
{
    if (check_if_other_than_str(board) == -21)
        return (-21);
    if (board->entry1 <= 0 || board->entry1 > board->matches) {
        write(1, "Error: this line is out of range\n", 33);
        return (-21);
    }
    return (0);
}

int m_handling(board_t *board)
{
    if (check_if_other_than_str(board) == -21)
        return (-21);
    if (board->entry2 > board->nb_max) {
        print_error(board, 0);
        return (-21);
    }
    if (board->entry2 <= 0) {
        print_error(board, 1);
        return (-21);
    }
    return (0);
}

int is_enough_matches(board_t *board)
{
    int i = 0;
    int result = 0;

    while (board->board[board->entry1][i] != 0) {
        if (board->board[board->entry1][i] == '|') {
            result += 1;
        }
        i += 1;
    }
    if (result < board->entry2) {
        write(1, "Error: not enough matches on this line\n", 39);
        return (-21);
    }
    return (0);
}