/*
** EPITECH PROJECT, 2023
** my_compute_power_rec
** File description:
** An recursive function that returns the first argument
** raised to the power p, where p is the second argument.
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0) {
        return 0;
    } else if (p != 0) {
        return (nb * my_compute_power_rec(nb, p - 1));
    } else {
        return 1;
    }
}
