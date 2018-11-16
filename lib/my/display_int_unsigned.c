/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** yes
*/

#include <stdarg.h>

int display_int_unsigned(va_list ap)
{
    unsigned int valu;

    valu = (unsigned int) va_arg(ap, unsigned int);
    my_put_unsigned_number(valu);
}
