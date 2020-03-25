/*
** EPITECH PROJECT, 2020
** error2.c
** File description:
** error2.c
*/

#include "../include/main.h"

int my_error(char *nb1, char *nb2, board_t *board)
{
    board->matches = my_getnbr(nb1);
    board->nb_max = my_getnbr(nb2);
    if (board->matches <= 1 || board->nb_max <= 1 || board->matches > 99) {
        write(1, "You must enter a number above 1 and less than 99\n", 49);
        return (84);
    }
    return (0);
}

void print_error2(board_t *board)
{
    write(1, "You must put 2 arguments !\n", 27);
    free(board);
}