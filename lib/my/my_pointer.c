/*
** EPITECH PROJECT, 2023
** my_pointer
** File description:
** prints a pointer adress
*/

#include "../../include/my.h"

int my_pointer(unsigned long int nb)
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
    my_putstr("0x");
    for (j = i - 1; j > 0; j--) {
        my_putchar(hexa[j]);
    }
}
