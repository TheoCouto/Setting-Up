/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my own printf function
*/

#include <stdarg.h>
#include "../../include/my.h"
#include "../../include/flags.h"

int search_flag(char format, va_list ap)
{
    printf_table table[] = {
        {'d', print_int}, {'i', print_int}, {'s', print_str}, {'c', print_cha},
        {'%', print_per}, {'o', print_oct}, {'u', print_uns}, {'x', print_hex},
        {'X', print_x_u}, {'e', print_e}, {'E', print_e_u}, {'f', print_f},
        {'p', print_p}, 0,
            };

    for (int i = 0; table[i].specifier; i++) {
        if (format == table[i].specifier) {
            table[i].function(ap);
            break;
        }
    }
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int result = 0;

    va_start(ap, format);
    while (*format != '\0') {
        if (*format == '%') {
            format++;
            result += search_flag(*format, ap);
        } else {
            result += my_putchar(*format);
        }
        format++;
    }
    va_end(ap);
    return result;
}
