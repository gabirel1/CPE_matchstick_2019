/*
** EPITECH PROJECT, 2020
** test3.c
** File description:
** test3.c
*/

#include "../include/main.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test (print_my_map, should_print_map)
{
    board_t *board = malloc(sizeof(board_t));
    board->matches = 4;
    cr_redirect_stdout();
    fill_board(board);
    print_my_map(board);
    cr_assert_stdout_eq_str("*********\n\
*   |   *\n\
*  |||  *\n\
* ||||| *\n\
*|||||||*\n\
*********");
}