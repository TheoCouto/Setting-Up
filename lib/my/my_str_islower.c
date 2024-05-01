/*
** EPITECH PROJECT, 2023
** my_str_islower.c
** File description:
** Nice
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            i += 1;
        } else {
            return (0);
        }
    }
    return (1);
}
