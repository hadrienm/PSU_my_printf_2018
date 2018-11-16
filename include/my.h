/*
** EPITECH PROJECT, 2018
** myh
** File description:
** myh
*/

#ifndef MY_H_
#define MY_H_
int another_function (va_list ap, char *str, int i);
int display_argument_string(va_list ap);
int display_char(va_list ap);
int display_int_unsigned(va_list ap);
int display_integer(va_list ap);
int display_string(char *str);
int my_put_unsigned_number(unsigned long long c);
unsigned int my_put_unsigned_number(unsigned int c);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int c);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int n);
int determine(char const *str, int x);
int addition(char const *str, int x, int m, char p);
int countval(char const *str);
int lenght(char const *str);
char *cpy_the_string(char const *str);
char *delete_part_str(char *strcpy, int x);
char *lowpriority(char *strcpy);
int determine2(char *strcpy, int x);
int strtolmy(char *strcpy, int x);
int divcalc(char *strcpy, int x, int d);
int multcalc(char *strcpy, int x, int d);
int modulocalc(char *strcpy, int x, int d);
int pluscalc(char *strcpy, int x, int d);
int lesscalc(char *strcpy, int x, int d);
int lowpriority2(char *strcpy, char p);
int priority(char *strcpy);
int calparen(char *strcpy, int j, int d);

#endif // MY_H_
