/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** reverse a str
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int temp;
    int i;

    for (i = 0; i < my_strlen(str) / 2; i++) {
        temp = str[i];
        str[i] = str[my_strlen(str) - i - 1];
        str[my_strlen(str) - i - 1] = temp;
    }
    return str;
}
