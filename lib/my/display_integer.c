/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** yes
*/

#include <stdarg.h>

int display_integer(va_list ap)
{
    int val = 0;

    val = va_arg(ap, int);
    my_put_nbr(val);
}
