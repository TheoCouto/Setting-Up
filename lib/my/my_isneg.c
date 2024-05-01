/*
** EPITECH PROJECT, 2023
** my_isneg
** File description:
** A function that displays either N if the integer passed
** as parameter is negative or P, if positive or null.
*/

#include "../../include/my.h"

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
}
