/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** yes
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int display_argument_string(va_list ap)
{
    char* test = malloc(sizeof(char*) * 1000);
    int ju = 0;

    test = va_arg(ap, char*);

    while (test[ju] != '\0') { 
        my_putchar(test[ju]);
        ju++;
    }
}
