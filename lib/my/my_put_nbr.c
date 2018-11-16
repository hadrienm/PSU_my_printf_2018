/*
** EPITECH PROJECT, 2018
** my_put_unsigned_number
** File description:
** display unsigned int
*/

int my_put_nbr(int c)
{
    long long m = 1;
    long long resultat = 0;

    if (c < 0) {
        my_putchar('-');
        c *= -1;
    }
    while (m <= c)
        m *= 10;
    m /= 10;
    while (m != 0) {
        resultat = c / m;
        c -= resultat * m;
        m /= 10;
        my_putchar(resultat + 48);
    }
}
