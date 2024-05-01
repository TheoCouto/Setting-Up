/*
** EPITECH PROJECT, 2023
** printf flags
** File description:
** continue
*/

#include <stdarg.h>
#include "../../include/my.h"
#include "../../include/flags.h"

void print_f(va_list ap)
{
    my_double_f(va_arg(ap, double));
}

void print_p(va_list ap)
{
    my_pointer(va_arg(ap, unsigned long int));
}

void print_space(va_list ap)
{
    my_putchar(' ');
    my_put_nbr(va_arg(ap, int));
}
