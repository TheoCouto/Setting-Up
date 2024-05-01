##
## EPITECH PROJECT, 2023
## Setting Up
## File description:
## Makefile
##

SRC	=	src/main.c						\
		src/setting_up.c				\
		src/read_file.c					\
		src/get_nbr_rows.c				\
		src/get_nbr_cols.c				\
		src/mem_alloc_2d_array.c		\
		src/load_map.c					\
		src/maximum_sub_square_matrix.c	\
		src/largest_square_map.c		\
		src/error_handling.c			\
		src/generating_up.c				\
		src/gen_map.c					\
		src/gen_mem_alloc_2d_array.c	\
		src/gen_load_map.c				\
		src/gen_error_handling.c		\

NAME	=	setting_up

OBJ	=	$(SRC:.c=.o)

LIB	=	-L ./lib/my/ -lmy

CFLAGS	=	-W -Wall -Wextra -Werror -Wfatal-errors

CPPFLAGS	=	-g3

all: $(OBJ)
	make -C ./lib/my/
	gcc -o $(NAME) $(SRC) $(LIB)

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *#
	rm -f libmy.a
	$(MAKE) -C lib/my/ clean

fclean: clean
	rm -f $(NAME)

re: fclean all
