/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** yes
*/

#include <stdarg.h>

int display_argument_string(va_list ap)
{
    char* test;
    int ju = 0;

    test = va_arg(ap, char *);
    while (test[ju] != '\0') {
        my_putchar(test[ju]);
        ju++;
    }
}
