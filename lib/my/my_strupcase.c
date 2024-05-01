/*
** EPITECH PROJECT, 2023
** my_strupcase.c
** File description:
** a functiom that puts every letter of
** every word in it in uppercase
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (97 <= str[i] <= 122) {
            str[i] = str[i] - 32;
        }
        i += 1;
    }
    return (str);
}
