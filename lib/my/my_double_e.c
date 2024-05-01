/*
** EPITECH PROJECT, 2023
** file
** File description:
** desc
*/

#include <stdarg.h>
#include "../../include/my.h"

void print_decimal(float num)
{
    num -= (int)num;
    for (int i = 0; i < 6; i++) {
        num *= 10;
        my_put_nbr((int)num);
        num -= (int)num;
    }
}

void print_exponent(int exponent)
{
    if (exponent >= 0) {
        my_putchar('+');
    } else {
        my_putchar('-');
        exponent = -exponent;
    }
    if (exponent < 10) {
        my_putchar('0');
    }
    my_put_nbr(exponent);
}

void my_double_e(float num)
{
    int exponent = 0;

    if (num == 0) {
        my_putchar('0');
        return;
    }
    if (num < 0) {
        my_putchar('-');
        num = -num;
    }
    while (num >= 10 || num <= -10) {
        num /= 10;
        exponent++;
    }
    my_put_nbr((int)num);
    my_putchar('.');
    print_decimal(num);
    my_putstr("e");
    print_exponent(exponent);
}

void my_double_e_upper(float num)
{
    int exponent = 0;

    if (num == 0) {
        my_putchar('0');
        return;
    }
    if (num < 0) {
        my_putchar('-');
        num = -num;
    }
    while (num >= 10 || num <= -10) {
        num /= 10;
        exponent++;
    }
    my_put_nbr((int)num);
    my_putchar('.');
    print_decimal(num);
    my_putstr("E");
    print_exponent(exponent);
}
