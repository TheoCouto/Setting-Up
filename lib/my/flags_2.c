/*
** EPITECH PROJECT, 2023
** flags printf
** File description:
** 'u' / 'x' / 'X' / 'e' / 'E'
*/

#include <stdarg.h>
#include "../../include/my.h"
#include "../../include/flags.h"

void print_uns(va_list ap)
{
    my_put_unsigned(va_arg(ap, int));
}

void print_hex(va_list ap)
{
    my_hexadecimal_lower(va_arg(ap, int));
}

void print_x_u(va_list ap)
{
    my_hexadecimal_upper(va_arg(ap, int));
}

void print_e(va_list ap)
{
    my_double_e(va_arg(ap, double));
}

void print_e_u(va_list ap)
{
    my_double_e_upper(va_arg(ap, double));
}
