/*
** EPITECH PROJECT, 2023
** my_strncmp.c
** File description:
** same as my_strcmp but until n characters
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int j = 0;

    while ((i < n) && (s1[i] == s2[j]) && (s1[i] != '\0') && (s2[j] != '\0')) {
        i += 1;
        j += 1;
    }
    return (s1[i] - s2[i]);
}
