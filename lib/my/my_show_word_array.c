/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
** a function that displays the content of an
** array of words. There must be one word per line,
** and each word must end with ‘\n’, including the last one.
*/

int my_show_word_array(char *const *tab)
{
    int i = 0;

    while (tab[i]) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i += 1;
    }
    return (0);
}
