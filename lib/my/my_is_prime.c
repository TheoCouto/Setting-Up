/*
** EPITECH PROJECT, 2023
** my_is_prime
** File description:
** A function that returns 1 if the number is prime and 0 if not.
*/

int my_is_prime(int nb)
{
    int i;
    int prime = 1;

    if (nb < 0) {
        nb = nb * (-1);
    }
    if (nb == 0 || nb == 1) {
        prime = 0;
    }
    for (i = 2; i <= nb / 2; i++) {
        if (nb % i == 0) {
            prime = 0;
            break;
        }
    }
    return (prime);
}
