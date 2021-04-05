##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

SRC     =	src/main.c					\
			src/error_handling.c		\

OBJ     =	$(SRC:.c=.o)

NAME	=	solver

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