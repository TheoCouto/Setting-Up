/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** File map error handling.
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../include/my.h"
#include "../include/set_up.h"

static int is_nb_cols(char *buffer, int first_row_nbcols, int i)
{
    int nb_cols = 0;
    int error_flag = 0;

    for (int j = i; buffer[j] != '\0'; j++) {
        if (buffer[j] == '\n') {
            error_flag = 1;
        }
        if (error_flag == 1 && nb_cols != first_row_nbcols) {
            return -1;
        }
        if (error_flag == 1) {
            error_flag = 0;
            nb_cols = -1;
        }
        nb_cols += 1;
    }
    return 0;
}

static int is_nbcols_valid(char const *filepath)
{
    char *buffer = read_map(filepath);
    int i = map_start_index(buffer);
    int first_row_nbcols = 0;

    while (buffer[i] != '\n') {
        first_row_nbcols += 1;
        i++;
    }
    i++;
    if (is_nb_cols(buffer, first_row_nbcols, i) == -1) {
        my_putstr("Error: Invalid number of columns\n");
        return -1;
    }
    free(buffer);
    return 0;
}

static int is_nbrows_valid(char const *filepath)
{
    char *buffer = read_map(filepath);
    int first_row_nb = get_nbr_rows(buffer);
    int i = map_start_index(buffer);
    int total_nb_rows = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n') {
            total_nb_rows += 1;
        }
        i++;
    }
    if (first_row_nb != total_nb_rows) {
        my_putstr("Error: Invalid number of rows\n");
        free(buffer);
        return -1;
    }
    free(buffer);
    return 0;
}

static int is_file_valid(char const *filepath)
{
    char *buffer = read_map(filepath);
    int i = map_start_index(buffer);

    while (buffer[i] != '\0') {
        if (buffer[i] != '.' && buffer[i] != 'o' && buffer[i] != '\n') {
            my_putstr("Error: Bad character in file\n");
            return -1;
        }
        i++;
    }
    free(buffer);
    return 0;
}

static int is_file_empty(char const *filepath)
{
    char *buffer = read_map(filepath);

    if (my_strcmp(buffer, "") == 0) {
        my_putstr("Error: File given is empty\n");
        free(buffer);
        return -1;
    }
    free(buffer);
    return 0;
}

static int opening_and_closing(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        my_putstr("Error opening file.\n");
        return -1;
    }
    if (close(fd) == -1) {
        my_putstr("Error closing file..\n");
        return -1;
    }
    return (0);
}

int error_handling(char **argv)
{
    if (opening_and_closing(argv[1]) == -1) {
        return 84;
    }
    if (is_file_empty(argv[1]) == -1) {
        return 84;
    }
    if (is_file_valid(argv[1]) == -1) {
        return 84;
    }
    if (is_nbrows_valid(argv[1]) == -1) {
        return 84;
    }
    if (is_nbcols_valid(argv[1]) == -1) {
        return 84;
    }
    return 0;
}
