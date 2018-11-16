##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## finalstumper
##

SRC		=		lib/my/another_function.c \
					lib/my/display_argument_string.c \
					lib/my/display_char.c \
					lib/my/display_int_unsigned.c \
					lib/my/display_integer.c \
					lib/my/display_string.c \
					lib/my/my_put_nbr.c \
					lib/my/my_put_unsigned_number.c \
					lib/my/my_putchar.c \
					lib/my/my_putstr.c \
					lib/my/my_revstr.c \
					lib/my/convert.c \
					lib/my/printf.c

all: $(NAME)

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS = -I./include

all: $(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
			rm -f $(NAME)
			rm -f $(OBJ)

re:		all clean
