/*
** EPITECH PROJECT, 2023
** my_octal
** File description:
** convert unsigned int to unsigned octal
*/

#include "../../include/my.h"

unsigned int my_octal(unsigned int nb)
{
    long long octal = 0;
    int i = 1;

    if (nb > 4294967295) {
        return (0);
    }
    while (nb != 0) {
        octal += (nb % 8) * i;
        nb = nb / 8;
        i = i * 10;
    }
    my_put_unsigned(octal);
}
