/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** yes
*/

#include <stdarg.h>

int another_function (va_list ap, char *str, int i)
{
    if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i')) {
        display_integer(ap);
        i = i + 2;
    } if (str[i] == '%' && str[i + 1] == 'c') {
        display_char(ap);
        i = i + 2;
    } if (str[i] == '%' && str[i + 1] == 's') {
        display_argument_string(ap);
        i = i + 2;
    } if (str[i] == '%' && str[i + 1] == 'u') {
        display_int_unsigned(ap);
        i = i + 2;
    } else
        my_putchar(str[i]);
    return (i);
}
