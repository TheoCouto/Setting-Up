/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Generate map and find the largest square.
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/set_up.h"

void generating_up(char *size, char *pattern)
{
    char *buffer = gen_map(my_getnbr(size), pattern);
    int nb_rows = my_getnbr(size);
    int nb_cols = my_getnbr(size);
    int **arr = gen_mem_alloc_2d_array(size);
    char **map = gen_mem_alloc_2d_map(size);

    gen_load_array(arr, buffer, size);
    gen_load_map(map, buffer, size);
    maximum_sub_square_matrix(arr, nb_rows, nb_cols);
    largest_square_map(map, arr, nb_rows, nb_cols);
    print_map_largest_square(map, nb_rows, nb_cols);
    free(buffer);
    free_2d_arrays(arr, map, nb_rows);
}
