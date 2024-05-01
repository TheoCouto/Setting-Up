/*
** EPITECH PROJECT, 2023
** flags printf
** File description:
** 'd' / 'i' / 's' / 'c' / '%' / 'o'
*/

#include <stdarg.h>
#include "../../include/my.h"
#include "../../include/flags.h"

void print_int(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void print_str(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void print_cha(va_list ap)
{
    my_putchar(va_arg(ap, int));
}

void print_per(va_list ap)
{
    my_putchar('%');
}

void print_oct(va_list ap)
{
    my_octal(va_arg(ap, int));
}
