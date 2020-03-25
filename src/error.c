/*
** EPITECH PROJECT, 2020
** error.c
** File description:
** error.c
*/

#include "../include/main.h"

int error(char *str)
{
    short i = 0;

    while (!str[i]) {
        if (str[i] < '0' || str[i] > '9')
            return (84);
        i += 1;
    }
    return (0);
}