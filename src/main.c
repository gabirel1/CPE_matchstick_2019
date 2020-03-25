/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include "../include/main.h"

int main(int ac, char **av)
{
    board_t *board = malloc(sizeof(board_t));
    if (ac != 3) {
        print_error2(board);
        return (84);
    } else {
        if (error(av[1]) == 84 || error(av[2]) == 84)
            return (84);
        if (my_error(av[1], av[2], board) == 84) {
            free(board);
            return (84);
        }
        if (init(board) == 1) {
            free(board);
            return (1);
        } else if (board->my_return == 1) {
            free(board);
            return (0);
        } else {
            free(board);
            return (2);
        }
    }
}