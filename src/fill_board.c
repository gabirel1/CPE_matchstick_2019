/*
** EPITECH PROJECT, 2020
** fill_board.c
** File description:
** fill_board.c
*/

#include "../include/main.h"

void malloc_my_board(board_t *board)
{
    int i = 0;

    board->board = malloc(sizeof(char *) * (board->matches + 3));
    while (i <= board->matches + 2) {
        board->board[i] = malloc(sizeof(char) * (board->nb_of_stars + 2));
        i += 1;
    }
    board->board[0][0] = 0;
}

void do_my_board_2(board_t *board, int index)
{
    int i = 1;

    board->board[index][0] = '*';
    while (i <= board->nb_spaces) {
        board->board[index][i] = ' ';
        i += 1;
    }
    for (int a = 0; a < board->nb_arrow; a += 1) {
        board->board[index][i] = '|';
        i += 1;
    }
    for (int j = 0; j < board->nb_spaces; j += 1) {
        board->board[index][i] = ' ';
        i += 1;
    }
    board->board[index][i] = '*';
    board->board[index][i + 1] = '\n';
    board->board[index][i + 2] = 0;
}

void make_last_line(board_t *board)
{
    for (int i = 0; i < board->nb_of_stars; i++) {
        board->board[board->matches + 1][i] = '*';
        board->board[board->matches + 1][i + 1] = '\n';
        board->board[board->matches + 1][i + 2] = 0;
    }
    board->board[board->matches + 2][0] = 0;
}

void do_my_board(board_t *board)
{
    for (int i = 0; i < board->nb_of_stars; i++) {
        board->board[0][i] = '*';
        board->board[0][i + 1] = '\n';
        board->board[0][i + 2] = 0;
    }
    for (int a = 1; a <= board->matches; a += 1) {
        do_my_board_2(board, a);
        board->nb_arrow += 2;
        board->nb_spaces += -1;
    }
    make_last_line(board);
    for (int j = 0; j <= board->matches + 1; j += 1) {
        my_putstr(board->board[j]);
    }
}

void fill_board(board_t *board)
{
    board->nb_arrow = 1;
    board->nb_spaces = board->matches - 1;
    board->nb_of_stars = board->matches * 2 + 1;
    malloc_my_board(board);
    do_my_board(board);
}