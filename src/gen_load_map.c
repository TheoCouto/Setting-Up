/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Fill generated map 2d-array.
*/

#include "../include/my.h"
#include "../include/set_up.h"

int **gen_load_array(int **arr, char *buffer, char *size_str)
{
    int nb_rows = my_getnbr(size_str);
    int nb_cols = my_getnbr(size_str);
    int i = 0;

    for (int j = 0; j != nb_rows; j++) {
        for (int k = 0; k != nb_cols; k++) {
            arr[j][k] = get_value_from_char(buffer[i]);
            i++;
        }
        i++;
    }
    return arr;
}

char **gen_load_map(char **map, char *buffer, char *size_str)
{
    int nb_rows = my_getnbr(size_str);
    int nb_cols = my_getnbr(size_str);
    int i = 0;

    for (int j = 0; j != nb_rows; j++) {
        for (int k = 0; k != nb_cols; k++) {
            map[j][k] = buffer[i];
            i++;
        }
        i++;
    }
    return map;
}
