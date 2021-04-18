##
## EPITECH PROJECT, 2021
## dante
## File description:
## Makefile
##

SRC	=	$(shell find -name "*.c")

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

all:	$(NAME) clean

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) -w -I ./include

%.o:	%.c
	@gcc -c $< -w -I ./include $(LDFLAGS) $(LIB) -o $@

clean:
	@@for p in $(SRC_LIB); do \
		make --no-print-directory -C $$p $@; \
	done
	@rm -f $(OBJ)
	@rm -f *# *~ ./*/*# ./*/*~ ./*/*/*# ./*/*/*~ vgcore*

fclean:
	@@for p in $(SRC_LIB); do \
		make --no-print-directory -C $$p $@; \
	done
	@rm -f $(OBJ)
	@rm -f *# *~ ./*/*# ./*/*~ ./*/*/*# ./*/*/*~ vgcore*
	@rm -f $(NAME)

re: fclean all

valgrind:
	@@for p in $(SRC_LIB); do \
		make --no-print-directory -C $$p $@; \
	done
	@gcc -g3 -o $(NAME) $(SRC) -I ./include $(LDFLAGS) $(LIBS)