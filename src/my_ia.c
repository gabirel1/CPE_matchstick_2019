/*
** EPITECH PROJECT, 2020
** my_ia.c
** File description:
** my_ia.c
*/

#include "../include/main.h"

void ia_turn(board_t *board)
{
    board->ia_line = 0;

    while (board->ia_line <= board->matches) {
        if (check_line(board, board->ia_line) == -12)
            break;
        board->ia_line += 1;
    }
}

void my_ia(board_t *board)
{
    ia_turn(board);
    write(1, "AI's turn...\n", 13);
    write(1, "AI removed ", 11);
    my_put_nbr(board->ia_removed);
    write(1, " match(es) from line ", 21);
    my_put_nbr(board->ia_line);
    write(1, "\n", 1);
    print_my_map(board);
}