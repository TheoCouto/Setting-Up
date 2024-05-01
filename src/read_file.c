/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** Read map file.
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "../include/my.h"

int map_error_cases(int fd, char *buffer, int content)
{
    if (fd == -1) {
        my_putstr("Error opening file\n");
        return 84;
    }
    if (buffer == 0) {
        my_putstr("Error allocating memory\n");
        return 84;
    }
    if (content == -1) {
        my_putstr("Error reading file\n");
        return 84;
    }
    return 0;
}

char *read_map(const char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat file_stat;
    char *buffer;
    int content;

    stat(filepath, &file_stat);
    buffer = malloc(sizeof(char) * (file_stat.st_size + 1));
    content = read(fd, buffer, file_stat.st_size);
    if (map_error_cases(fd, buffer, content) == 84) {
        close(fd);
        free(buffer);
        return 0;
    }
    buffer[file_stat.st_size] = '\0';
    if (close(fd) == -1) {
        free(buffer);
        return 0;
    }
    return buffer;
}
