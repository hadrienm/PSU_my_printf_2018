/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** function  returns square root
*/

#include <stdarg.h>

#ifndef MY_H_
#define MY_H_
int convert(va_list ap, char *str, int i);
int another_function (va_list ap, char *str, int i);
int display_argument_string(va_list ap);
int display_char(va_list ap);
int display_int_unsigned(va_list ap);
int display_integer(va_list ap);
int display_string(char *str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
void my_isneg(int p);
int my_is_prime(int nb);
void my_putchar(char c);
int my_put_nbr(void);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const * s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
int my_swap(int *a ,int *b);

#endif //MY_H_
