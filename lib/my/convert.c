/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** yes
*/

#include <stdarg.h>

int convert(va_list ap, char *str, int i)
{
    //printf("coucou");
    int decimal = 0;
    char *decimal2 = malloc(sizeof(char) * 34);
    int ab = 0;

    decimal = va_arg(ap, int);
    while (decimal != 0) {
        //printf("coucou je rentre dans ton anus");
        decimal2[ab] = (decimal % 2) + 48;
        decimal = decimal / 2;
        ab++;
        i++;
        }
    decimal2 = '\0';
    my_revstr(decimal2);
    my_putstr(decimal2);
    return (i);
}
