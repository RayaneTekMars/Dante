##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

SRC_SOLVER		=	solver/src/main.c				\
					solver/src/error_handling.c		\

SRC_GENERATOR	=	generator/src/aff.c				\
					generator/src/alloc.c			\
					generator/src/error_handling.c	\
					generator/src/lib2.c			\
					generator/src/lib.c				\
					generator/src/main.c			\
					generator/src/body.c			\

OBJ1		=	$(SRC_SOLVER:.c=.o)

OBJ2		=	$(SRC_GENERATOR:.c=.o)

NAME1	=	solver/solver

NAME2	=	generator/generator

all:	$(NAME1)	$(NAME2)

$(NAME1):
		gcc -g3 -Wall -c $(SRC_SOLVER)
		gcc -g $(SRC_SOLVER) -o $(NAME1)

$(NAME2):
		gcc -g3 -Wall -c $(SRC_GENERATOR)
		gcc -g $(SRC_GENERATOR) -o $(NAME2)

clean:
		rm -rf $(OBJ1)
		rm -rf $(OBJ2)
		rm -rf *.o
		rm -rf *~

fclean: clean
	rm -rf $(NAME1)
	rm -rf $(NAME2)

re:	fclean	all