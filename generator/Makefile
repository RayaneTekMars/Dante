##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

SRC     =	src/main.c				\
			src/aff.c				\
			src/lib.c				\
			src/lib2.c				\
			src/alloc.c				\
			src/error_handling.c	\

OBJ     =	$(SRC:.c=.o)

NAME	=	generator

all:	$(NAME)

$(NAME):
		gcc -g3 -Wall -c $(SRC)
		gcc -g $(SRC) -o $(NAME)

clean:
		rm -rf $(OBJ)
		rm -rf *.o
		rm -rf *~

fclean: clean
		rm -rf $(NAME)

re:	fclean	all