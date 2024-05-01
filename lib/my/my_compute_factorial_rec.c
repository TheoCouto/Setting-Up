/*
** EPITECH PROJECT, 2023
** my_compute_factorial_rec
** File description:
** A recursive function that returns the factorial
** of the number given as a parameter.
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12) {
        return 0;
    } else if (nb >= 1) {
        return nb * my_compute_factorial_rec(nb - 1);
    } else {
        return 1;
    }
}
