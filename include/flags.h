/*
** EPITECH PROJECT, 2023
** header of the flags
** File description:
** header of the flags
*/

#ifndef FLAGS_H_
    #define FLAGS_H_
    #include <stdarg.h>

void print_int(va_list ap);

void print_str(va_list ap);

void print_cha(va_list ap);

void print_per(va_list ap);

void print_oct(va_list ap);

void print_uns(va_list ap);

void print_hex(va_list ap);

void print_x_u(va_list ap);

void print_e(va_list ap);

void print_e_u(va_list ap);

void print_f(va_list ap);

void print_p(va_list ap);

void print_space(va_list ap);

#endif /* FLAGS_H_ */
