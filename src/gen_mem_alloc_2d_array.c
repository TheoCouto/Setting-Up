/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Generated map 2d-array memory allocation.
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/set_up.h"

int **gen_mem_alloc_2d_array(char *size)
{
    int **arr;
    int i;
    int nb_rows = my_getnbr(size);
    int nb_cols = my_getnbr(size);

    arr = malloc(sizeof(int *) * (nb_rows + 1));
    for (i = 0; i != nb_rows; i++) {
        arr[i] = malloc(sizeof(int) * (nb_cols + 1));
    }
    arr[i] = '\0';
    return arr;
}

char **gen_mem_alloc_2d_map(char *size)
{
    char **map;
    int i;
    int nb_rows = my_getnbr(size);
    int nb_cols = my_getnbr(size);

    map = malloc(sizeof(char *) * (nb_rows + 1));
    for (i = 0; i != nb_rows; i++) {
        map[i] = malloc(sizeof(char) * (nb_cols + 1));
    }
    map[i] = '\0';
    return map;
}
