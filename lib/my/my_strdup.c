/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** a function that allocates memory and copies
** the string given as argument in it.
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *dest;
    int i = 0;
    int str_len = my_strlen(src);

    dest = malloc((sizeof(char)) * (str_len + 1));
    while (i < str_len) {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}
