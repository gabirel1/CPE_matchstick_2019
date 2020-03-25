/*
** EPITECH PROJECT, 2020
** test2.c
** File description:
** test2.c
*/

#include "../include/main.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test (check_if_other_than_str, should_print)
{
    board_t *board = malloc(sizeof(board_t));
    board->buffer = "9salut";
    cr_redirect_stdout();
    check_if_other_than_str(board);
    cr_assert_stdout_eq_str("Error: invalid input \
(positive number expected)\n");
}

Test (check_if_other_than_str, should_print2)
{
    board_t *board = malloc(sizeof(board_t));
    board->buffer = "9salut";
    cr_redirect_stdout();
    check_if_other_than_str(board);
    cr_assert_stdout_eq_str("Error: invalid input \
(positive number expected)\n");
    free(board);
}

Test (check_if_other_than_str, should_return0)
{
    board_t *board = malloc(sizeof(board_t));
    board->buffer = "12";
    int res = check_if_other_than_str(board);
    cr_assert_eq(res, 0);
}