/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Find the largest square in map.
*/

#include "../include/my.h"
#include "../include/set_up.h"

static int minimum_ldt(int **arr, int i, int j)
{
    int left = arr[i][j - 1];
    int diag = arr[i - 1][j - 1];
    int top = arr[i - 1][j];

    if (left == diag && left == top && diag == top) {
        return (left + 1);
    }
    if (left <= diag && left <= top) {
        return (left + 1);
    }
    if (diag <= left && diag <= top) {
        return (diag + 1);
    }
    if (top <= left && top <= diag) {
        return (top + 1);
    }
    return 0;
}

static int update_value(int **arr, int i, int j)
{
    return (arr[i][j] != 0) ? minimum_ldt(arr, i, j) : 0;
}

int **maximum_sub_square_matrix(int **arr, int nb_rows, int nb_cols)
{
    for (int i = 1; i != nb_rows; i++) {
        for (int j = 1; j != nb_cols; j++) {
            arr[i][j] = update_value(arr, i, j);
        }
    }
    return arr;
}
