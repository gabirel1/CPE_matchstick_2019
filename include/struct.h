/*
** EPITECH PROJECT, 2020
** struct.h
** File description:
** struct.h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include "main.h"

typedef struct board_s
{
    char **board;
    char *buffer;
    int matches;
    int nb_max;
    int nb_of_stars;
    int nb_spaces;
    int nb_arrow;
    int entry1;
    int entry2;
    size_t len;
    int ia_line;
    int ia_matches;
    int ia_removed;
    int nb_matches;
    int my_return;
} board_t;

#endif /* !STRUCT_H_ */
