/*
** EPITECH PROJECT, 2020
** error_handling2.c
** File description:
** error_handling2.c
*/

#include "../include/main.h"

int check_if_other_than_str(board_t *board)
{
    int i = 0;

    while (board->buffer[i] != '\0') {
        if ((board->buffer[i] < '0'  && board->buffer[i] != '\n') \
        || board->buffer[i] > '9') {
            write(1, "Error: invalid input (positive number expected)\n", 48);
            return (-21);
        }
        i += 1;
    }
    return (0);
}