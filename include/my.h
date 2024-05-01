/*
** EPITECH PROJECT, 2023
** my
** File description:
** my header
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>

typedef struct {
    char specifier;
    void (*function)(va_list);
} printf_table;

int my_pointer(unsigned long int nb);

void my_double_f(float num);

void my_double_e_upper(float num);

void my_double_e(float num);

int my_hexadecimal_upper(unsigned int nb);

int my_hexadecimal_lower(unsigned int nb);

unsigned int my_put_unsigned(unsigned int nb);

unsigned int my_octal(unsigned int nb);

int print_format(char format, va_list ap);

int my_printf(const char *format, ...);

unsigned int my_compute_power_it(int nb, int p);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_find_prime_sup(int nb);

int my_getnbr(char const *str);

int my_isneg(int nb);

int my_is_prime(int nb);

int my_putchar(char c);

int my_nbr(int nb);

int my_put_nbr(int nb);

int my_putstr(char const *str);

char *my_revstr(char *str);

int my_showmem(char const *str, int size);

int my_showstr(char const *str);

void my_sort_int_array(int *tab, int size);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

int my_str_isalpha(char const *str);

int my_str_islower(char const *str);

int my_str_isnum(char const *str);

int my_str_isprintable(char const *str);

int my_str_isupper(char const *str);

int my_strlen(char const *str);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

void my_swap(int *a, int *b);

#endif /* MY_H_ */
