/*
** EPITECH PROJECT, 2023
** my_double_f
** File description:
** The double argument is rounded and
** converted to decimal notation
*/

#include "../../include/my.h"

void my_double_f(float num)
{
    int int_part = (int)num;
    float fl_part = num - int_part;

    if (num == 0){
        my_put_nbr(0);
        return;
    }
    my_put_nbr(int_part);
    my_putchar('.');
    for (int i = 0; i < 6; i++) {
        if (fl_part < 0) {
            fl_part = -fl_part;
        }
        fl_part *= 10;
        my_put_nbr((int)fl_part);
        fl_part -= (int)fl_part;
    }
}
