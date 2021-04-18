##
## EPITECH PROJECT, 2021
## dante
## File description:
## Makefile
##

all:
	@echo -ne "Generator : Make\n"
	@make --no-print-directory -C ./generator $@
	@echo -ne "Solver : Make\n"
	@make --no-print-directory -C ./solver $@

clean:
	@echo -ne "Generator : Make Clean\n"
	@make --no-print-directory -C ./generator $@
	@echo -ne "Solver : Make Clean\n"
	@make --no-print-directory -C ./solver $@

fclean:
	@echo -ne "Generator : Make Fclean\n"
	@make --no-print-directory -C ./generator $@
	@echo -ne "Solver : Make Fclean\n"
	@make --no-print-directory -C ./solver $@

re:
	@echo -ne "Generator : Make Re\n"
	@make --no-print-directory -C ./generator $@
	@echo -ne "Solver : Make Re\n"
	@make --no-print-directory -C ./solver $@

valgrind:
	@echo -ne "Generator : Make Valgrind\n"
	@make --no-print-directory -C ./generator $@
	@echo -ne "Solver : Make Valgrind\n"
	@make --no-print-directory -C ./solver $@
