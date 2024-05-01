/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Generated map error handling.
*/

#include "../include/my.h"
#include "../include/set_up.h"

static int is_pattern_valid(char *pattern)
{
    int i = 0;

    if (my_strlen(pattern) == 0) {
        my_putstr("Error: Pattern lenght = 0\n");
        return -1;
    }
    while (pattern[i] != '\0') {
        if (pattern[i] != '.' && pattern[i] != 'o') {
            my_putstr("Error: Invalid map pattern\n");
            return -1;
        }
        i++;
    }
    return 0;
}

static int is_size_valid(char const *size_str)
{
    int i = 0;
    int size;

    while (size_str[i] != '\0') {
        if (size_str[i] < '0' && size_str[i] > '9') {
            my_putstr("Error: Invalid map size\n");
            return -1;
        }
        i++;
    }
    size = my_getnbr(size_str);
    if (size <= 0) {
        my_putstr("Error: Size <= 0\n");
        return -1;
    }
    return 0;
}

int gen_error_handling(char **argv)
{
    if (is_size_valid(argv[1]) == -1) {
        return 84;
    }
    if (is_pattern_valid(argv[2]) == -1) {
        return 84;
    }
    return 0;
}
