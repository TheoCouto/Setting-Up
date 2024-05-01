/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Map 2d-array memory allocation.
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/set_up.h"

int **mem_alloc_2d_array(char const *buffer)
{
    int nb_rows = get_nbr_rows(buffer);
    int nb_cols = get_nbr_cols(buffer);
    int **arr = malloc(sizeof(int *) * (nb_rows + 1));
    int i;

    for (i = 0; i < nb_rows; i++) {
        arr[i] = malloc(sizeof(int) * (nb_cols + 1));
    }
    arr[i] = NULL;
    return arr;
}

char **mem_alloc_2d_map(char const *buffer)
{
    int nb_rows = get_nbr_rows(buffer);
    int nb_cols = get_nbr_cols(buffer);
    char **map = malloc(sizeof(char *) * (nb_rows + 1));
    int i;

    for (i = 0; i < nb_rows; i++) {
        map[i] = malloc(sizeof(char) * (nb_cols + 1));
    }
    map[i] = NULL;
    return map;
}
