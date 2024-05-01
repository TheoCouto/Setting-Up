/*
** EPITECH PROJECT, 2023
** my_str_isupper.c
** File description:
** returns 1 if str only contains uppercase
** returns 0 otherwise
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            i += 1;
        } else {
            return (0);
        }
    }
    return (1);
}
