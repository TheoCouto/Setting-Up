/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Fill the largest square in map.
*/

static int square_value_func(int **arr, int value, int i, int j)
{
    if (arr[i][j] > value) {
        value = arr[i][j];
    }
    return value;
}

int square_value(int **arr, int nb_rows, int nb_cols)
{
    int value = 0;

    for (int i = 0; i != nb_rows; i++) {
        for (int j = 0; j != nb_cols; j++) {
            value = square_value_func(arr, value, i, j);
        }
    }
    return value;
}

// ------------------------------------
static int row_value(int *row, int nb_cols, int sq_value)
{
    for (int j = 0; j != nb_cols; j++) {
        if (row[j] == sq_value) {
            return 1;
        }
    }
    return 0;
}

int x_position(int **arr, int nb_rows, int nb_cols, int sq_value)
{
    for (int i = 0; i != nb_rows; i++) {
        if (row_value(arr[i], nb_cols, sq_value) == 1) {
            return i;
        }
    }
    return 0;
}

// ------------------------------------
static int column_value(int **arr, int nb_cols, int sq_value, int i)
{
    for (int j = 0; j != nb_cols; j++) {
        if (arr[i][j] == sq_value) {
            return j;
        }
    }
    return -1;
}

int y_position(int **arr, int nb_rows, int nb_cols, int sq_value)
{
    int y;

    for (int i = 0; i != nb_rows; i++) {
        y = column_value(arr, nb_cols, sq_value, i);
        if (y != -1) {
            return y;
        }
    }
    return 0;
}

// ------------------------------------
char **largest_square_map(char **map, int **arr, int nb_rows, int nb_cols)
{
    int sq_value = square_value(arr, nb_rows, nb_cols);
    int x = x_position(arr, nb_rows, nb_cols, sq_value);
    int y = y_position(arr, nb_rows, nb_cols, sq_value);

    for (int i = x - (sq_value - 1); i <= x; i++) {
        for (int j = y - (sq_value - 1); j <= y; j++) {
            map[i][j] = 'x';
        }
    }
    return map;
}
