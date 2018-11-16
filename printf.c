/*
** EPITECH PROJECT, 2018
** print
** File description:
** make a printf
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int my_printf(char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%' && str[i + 1] == 'b') {
            printf("coucou je rentre dans le if");
            convert(ap, str, i);
          }
        i = another_function(ap, str, i);
    }
  va_end(ap);
}
