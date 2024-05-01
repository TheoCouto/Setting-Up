/*
** EPITECH PROJECT, 2023
** my_find_prime_sup.c
** File description:
** Nice
*/

#include "../../include/my.h"

int my_find_prime_sup(int nb)
{
    int i = 0;

    while (1) {
        if (my_is_prime(nb + i)) {
            return (nb + i);
        }
        i ++;
    }
    return (0);
}
