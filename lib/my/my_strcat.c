/*
** EPITECH PROJECT, 2023
** my_strcat.c
** File description:
** Nice
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int strlen = my_strlen(dest);

    while (src[i] != '\0') {
        dest[strlen + i] = src[i];
        i++;
    }
    return (dest);
}
