/*
** EPITECH PROJECT, 2023
** my_compute_square_root
** File description:
** A function that returns the square root(if it is a
** whole number) of the number given as argument.
** If the square root is not a whole number,
** the function return 0
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb < 0 || nb == 0) {
        return 0;
    }
    while (i * i != nb) {
        i += 1;
        if (i > nb) {
            return (0);
        }
    }
    return i;
}
