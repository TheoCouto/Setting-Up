/*
** EPITECH PROJECT, 2023
** Setting Up | Elementary Programming in C
** File description:
** main
*/

#include "../include/set_up.h"

int main(int argc, char **argv)
{
    if (argc == 1 || argc > 3) {
        return 84;
    }
    if (argc == 2) {
        if (error_handling(argv) == 84) {
            return 84;
        } else {
            setting_up(argv[1]);
        }
    }
    if (argc == 3) {
        if (gen_error_handling(argv) == 84) {
            return 84;
        } else {
            generating_up(argv[1], argv[2]);
        }
    }
    return 0;
}
