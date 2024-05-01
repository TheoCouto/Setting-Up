/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Generates map buffer according to the size and the pattern.
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/set_up.h"

char *gen_map(int size, char *pattern)
{
    int map_size = size * size + size;
    char *buffer = malloc(sizeof(char) * (map_size + 1));
    int j = 0;
    int count = 0;

    for (int i = 0; i < map_size; i++) {
        if (pattern[j] == '\0') {
            j = 0;
        }
        buffer[i] = pattern[j];
        j += 1;
        count += 1;
        if (count == size) {
            buffer[i + 1] = '\n';
            count = 0;
            i++;
        }
    }
    buffer[map_size] = '\0';
    return buffer;
}
