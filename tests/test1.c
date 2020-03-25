/*
** EPITECH PROJECT, 2020
** test1.c
** File description:
** test1.c
*/

#include "../include/main.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test (my_error, should_print)
{
    board_t *board = malloc(sizeof(board_t));
    cr_redirect_stdout();
    my_error("-12", "0", board);
    cr_assert_stdout_eq_str("You must enter a number \
above 1 and less than 99\n");
    free(board);
}

Test (print_error2, should_print2)
{
    board_t *board = malloc(sizeof(board_t));
    cr_redirect_stdout();
    print_error2(board);
    cr_assert_stdout_eq_str("You must put 2 arguments !\n");
}

Test (error, should_return)
{
    char t[] = "salut";
    int res = error(t);
    cr_assert_eq(res, 84);
}

Test (error, should_return2)
{
    char t[] = "12";
    int res = error(t);
    cr_assert_eq(res, 0);
}