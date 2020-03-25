/*
** EPITECH PROJECT, 2020
** game.c
** File description:
** game.c
*/

#include "../include/main.h"
#include <string.h>

void print_after_player_played(board_t *board)
{
    write(1, "Player removed ", 15);
    my_put_nbr(board->entry2);
    write(1, " match(es) from line ", 21);
    my_put_nbr(board->entry1);
    write(1, "\n", 1);
}

int first_get_line(board_t *board)
{
    write(1, "Line: ", 6);
    if (getline(&board->buffer, &board->len, stdin) == -1)
        return (-2);
    board->entry1 = my_getnbr(board->buffer);
    return (0);
}

int second_get_line(board_t *board)
{
    write(1, "Matches: ", 9);
    if (getline(&board->buffer, &board->len, stdin) == -1)
        return (-2);
    board->entry2 = my_getnbr(board->buffer);
    return (0);
}

int game_two(board_t *board)
{
    int i = 0;

    write(1, "Your turn:\n", 11);
    while (i < 1) {
        if (first_get_line(board) == -2) {
            board->my_return = 1;
            return (-2);
        }
        if (line_handling(board) == -21)
            continue;
        if (second_get_line(board) == -2) {
            board->my_return = 1;
            return (-2);
        }
        if (m_handling(board) == -21 || is_enough_matches(board) == -21)
            continue;
        i += 1;
    }
    return (0);
}

int game(board_t *board)
{
    int i = 0;

    while ("ricard") {
        if (i % 2 == 0) {
            if (game_two(board) == -2)
                return (0);
            game_three(board);
            if (game_end(board) == 2) {
                write(1, "You lost, too bad...\n", 21);
                return (2);
            }
            write(1, "\n", 1);
        }
        if (i % 2 != 0) {
            my_ia(board);
            if (game_end(board) == 2) {
                print_msg();
                return (1);
            }
            write(1, "\n", 1);
        }
        i += 1;
    }
    return (0);
}