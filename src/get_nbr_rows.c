/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Get the number of rows of the map.
*/

#include <stdlib.h>
#include "../include/my.h"

int map_start_index(char const *buffer)
{
    int i = 0;

    while (buffer[i] != '\n') {
        i++;
    }
    i++;
    return i;
}

int get_nbr_rows(char const *buffer)
{
    char *rows;
    int nb_rows;
    int len = 0;
    int i = 0;

    while (buffer[len] != '\n') {
        len++;
    }
    rows = malloc(sizeof(char) * (len + 1));
    while (buffer[i] != '\n') {
        rows[i] = buffer[i];
        i++;
    }
    rows[i] = '\0';
    nb_rows = my_getnbr(rows);
    free(rows);
    return nb_rows;
}
