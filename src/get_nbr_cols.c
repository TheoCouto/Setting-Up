/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Get the number of columns of the map.
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/set_up.h"

int get_nbr_cols(char const *buffer)
{
    int cols = 0;
    int len;

    len = map_start_index(buffer);
    while (buffer[len] != '\n') {
        cols += 1;
        len++;
    }
    return cols;
}
