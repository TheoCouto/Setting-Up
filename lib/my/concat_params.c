/*
** EPITECH PROJECT, 2023
** concat_params
** File description:
** a function that turns the command-line given
** arguments into a single string Arguments are to be
** separated by ‘\n’.
*/

#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    char *str;
    int i = 0;
    int j = 0;
    int k = 0;

    str = malloc(sizeof(char) * (argc + 1));
    while (i < argc) {
        str[k] = argv[i][j];
        j += 1;
        k += 1;
        if (argv[i][j] == '\0') {
            str[k] = '\n';
            i += 1;
            j = 0;
            k += 1;
        }
    }
    str[k - 1] = '\0';
    return (str);
}
