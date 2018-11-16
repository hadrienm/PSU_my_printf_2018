/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** yes
*/

#include <stdarg.h>

int display_char(va_list ap)
{
    int val = 0;

    val = va_arg(ap, int);
    my_putchar(val);
}
