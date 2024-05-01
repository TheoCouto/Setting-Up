/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** Nice
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
