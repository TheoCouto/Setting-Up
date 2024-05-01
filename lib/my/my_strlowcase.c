/*
** EPITECH PROJECT, 2023
** my_strlowcase.c
** File description:
** Nice
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (65 <= str[i] <= 90) {
            str[i] = str[i] + 32;
        }
        i += 1;
    }
    return (str);
}
