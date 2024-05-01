/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Fill map 2d-array.
*/

#include "../include/my.h"
#include "../include/set_up.h"

int get_value_from_char(char c)
{
    return (c == '.') ? 1 : 0;
}

int **load_array(int **arr, char *buffer)
{
    int nb_rows = get_nbr_rows(buffer);
    int nb_cols = get_nbr_cols(buffer);
    int i = map_start_index(buffer);

    for (int j = 0; j != nb_rows; j++) {
        for (int k = 0; k != nb_cols; k++) {
            arr[j][k] = get_value_from_char(buffer[i]);
            i++;
        }
        i++;
    }
    return arr;
}

char **load_map(char **map, char *buffer)
{
    int nb_rows = get_nbr_rows(buffer);
    int nb_cols = get_nbr_cols(buffer);
    int i = map_start_index(buffer);

    for (int j = 0; j != nb_rows; j++) {
        for (int k = 0; k != nb_cols; k++) {
            map[j][k] = buffer[i];
            i++;
        }
        i++;
    }
    return map;
}
