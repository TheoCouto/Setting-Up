/*
** EPITECH PROJECT, 2023
** my_compute_power_it
** File description:
** An iterative function that returns the firstargument
** raised to the power p, where p is the second argument.
*/

unsigned int my_compute_power_it(int nb, int p)
{
    unsigned int power_it = 1;
    int i;

    if (p < 0) {
        return 0;
    } else {
        for (i = 0; i < p; i++) {
            power_it = power_it * nb;
        }
        return (power_it);
    }
}
