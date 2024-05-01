/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Set the map and find the largest square.
*/

#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/set_up.h"

void free_2d_arrays(int **arr, char **map, int nb_rows)
{
    for (int i = 0; i < nb_rows; i++) {
        free(arr[i]);
    }
    free(arr);
    for (int i = 0; i < nb_rows; i++) {
        free(map[i]);
    }
    free(map);
}

void print_map_largest_square(char **map, int nb_rows, int nb_cols)
{
    for (int i = 0; i != nb_rows; i++) {
        write(1, map[i], nb_cols);
        my_putchar('\n');
    }
}

void setting_up(char const *filepath)
{
    char *buffer = read_map(filepath);
    int nb_rows = get_nbr_rows(buffer);
    int nb_cols = get_nbr_cols(buffer);
    int **arr = mem_alloc_2d_array(buffer);
    char **map = mem_alloc_2d_map(buffer);

    load_array(arr, buffer);
    load_map(map, buffer);
    maximum_sub_square_matrix(arr, nb_rows, nb_cols);
    largest_square_map(map, arr, nb_rows, nb_cols);
    print_map_largest_square(map, nb_rows, nb_cols);
    free(buffer);
    free_2d_arrays(arr, map, nb_rows);
}
