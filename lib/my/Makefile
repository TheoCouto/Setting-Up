##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	my_compute_factorial_it.c	\
		my_compute_factorial_rec.c	\
		my_compute_power_it.c		\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_find_prime_sup.c		\
		my_getnbr.c			\
		my_isneg.c			\
		my_is_prime.c			\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_showmem.c			\
		my_showstr.c			\
		my_sort_int_array.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_strupcase.c			\
		my_swap.c			\
		my_printf.c			\
		flags_1.c			\
		flags_2.c			\
		flags_3.c			\
		my_octal.c			\
		my_put_unsigned.c		\
		my_double_e.c			\
		my_double_f.c			\
		my_hexadecimal.c		\
		my_pointer.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../../

clean:
	rm -f $(OBJ)
	rm -f $(NAME)
	rm -f *~
	rm -f *#

fclean:	clean

re: fclean all
