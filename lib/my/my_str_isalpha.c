/*
** EPITECH PROJECT, 2023
** my_str_isalpha
** File description:
** return 1 if the str only contains alphanum
** return 0 otherwise
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) {
            i += 1;
        } else {
            return (0);
        }
    }
    return (1);
}
