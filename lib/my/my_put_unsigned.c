/*
** EPITECH PROJECT, 2023
** my_put_unsigned
** File description:
** prints unsigned numbers
*/

#include "../../include/my.h"

unsigned int my_uns(unsigned int nb)
{
    int nbr = nb % 10;

    nb = nb / 10;
    if (nb != 0){
        my_uns(nb);
    }
    my_putchar(nbr + 48);
}

unsigned int my_put_unsigned(unsigned int nb)
{
    if (nb > 4294967295) {
        return (0);
    }
    if (nb < 0) {
        nb += 4294967296;
        my_uns(nb);
    } else {
        my_uns(nb);
    }
    return (0);
}
