/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** a function that copies n characters
** from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i += 1;
    }
    if (n >= i) {
        dest[i] = '\0';
    }
    return dest;
}
