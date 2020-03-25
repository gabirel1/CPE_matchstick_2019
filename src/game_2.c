/*
** EPITECH PROJECT, 2020
** game_2.c
** File description:
** game_2.c
*/

#include "../include/main.h"

void game_three(board_t *board)
{
    print_after_player_played(board);
    remove_matches(board);
    print_my_map(board);
}

void print_msg(void)
{
    write(1, "I lost... snif... but I'll get you next time!!\n", 47);
}