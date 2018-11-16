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

/*int convert(va_list ap, char *str, int i)
{
    int decimal = 0;
    char *decimal2 = malloc(sizeof(char) * 34);
    int ab = 0;

    decimal = va_arg(ap, int);
    if(str[i] == '%' && str[i + 1] == 'b') {
      printf("Je te baise");
        while(decimal != 0) {
          decimal2[ab] = (decimal % 2) + 48;
          decimal = decimal / 2;
          ab++;
        }
        decimal2 = '\0';
        my_revstr(decimal2);
        my_putstr(decimal2);
    }
    return (i);
}


i++;
int display_string(char *str)
{
    int i = 0;

    while(str[i] != '%'){
        my_putchar(str[i]);
        i++;
    }
    return (i);
}

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

int display_char(va_list ap)
{
    int val = 0;

    val = va_arg(ap, int);
    my_putchar(val);
}

int display_integer(va_list ap)
{
    int val = 0;

    val = va_arg(ap, int);
    my_put_nbr(val);
}

int display_int_unsigned(va_list ap)
{
    unsigned int valu;

    valu = (unsigned int) va_arg(ap, unsigned int);
    my_put_unsigned_number(valu);
}

int another_function (va_list ap, char *str, int i)
{
  if(str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i')) {
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
      i++;
  } else
      my_putchar(str[i]);
      return (i);
}
*/
int my_printf(char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    for(int i = 0 ; str[i] != '\0' ; i++) {
        //i = convert(ap, str, i);
        i = another_function(ap, str, i);
    }
  va_end(ap);
}

void main(void)
{
    my_printf("test: %d \n", 1);
}
