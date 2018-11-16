/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** yes
*/

#include <stdarg.h>

int display_string(char *str)
{
    int i = 0;

    while(str[i] != '%'){
        my_putchar(str[i]);
        i++;
    }
    return (i);
}
