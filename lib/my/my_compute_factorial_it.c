/*
** EPITECH PROJECT, 2023
** my_compute_factorial_it
** File description:
** An iterative function that returns the factorial
** of the number given as a parameter.
*/

int my_compute_factorial_it(int nb)
{
    int i;
    int fact = 1;

    if (nb < 0 || nb > 12) {
        return 0;
    }
    if (nb == 0) {
        return 1;
    }
    for (i = 1; i <= nb; i++) {
        fact = fact * i;
    }
    return (fact);
}
