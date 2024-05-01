/*
** EPITECH PROJECT, 2023
** my_hexadecimal
** File description:
** convert decimal to hexadecimal
*/

#include "../../include/my.h"

int my_hexadecimal_lower(unsigned int nb)
{
    char hexa[100];
    unsigned int temp;
    int i = 1;
    int j;

    while (nb != 0) {
        temp = nb % 16;
        if (temp < 10) {
            temp += 48;
        } else {
            temp += 87;
        }
        i++;
        hexa[i] = temp;
        nb = nb / 16;
    }
    for (j = i - 1; j > 0; j--) {
        my_putchar(hexa[j]);
    }
}

int my_hexadecimal_upper(unsigned int nb)
{
    char hexa[100];
    int temp;
    int i = 1;
    int j;

    while (nb != 0) {
        temp = nb % 16;
        if (temp < 10) {
            temp += 48;
        } else {
            temp += 55;
        }
        i++;
        hexa[i] = temp;
        nb = nb / 16;
    }
    for (j = i - 1; j > 0; j--) {
        my_putchar(hexa[j]);
    }
}
