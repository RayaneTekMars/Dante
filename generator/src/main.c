/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "../include/lib.h"

int body(int ac, char **args)
{
    int nb_lines = my_getnbr(args[2]);
    int nb_cols = my_getnbr(args[1]);
    coord c = {nb_lines, nb_cols};
    char *str = refill_the_string(c);
    char **tab = the_malloc(str, '\n');

    choice(tab, c, args, ac);
    free(str);
    return (0);
}

int choice(char **tab, struct coord c, char **av, int ac)
{
    int i = 0;

    if (ac == 4) {
        tab = the_wall(tab, c);
        aff(tab, c);
    } else {
        tab = the_wall_imperfect(tab, c);
        aff(tab, c);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return (84);
    if (gtr(av[1]) == 1 || gtr(av[2]) == 1)
        return (84);
    if (ac == 4 && my_scmp(av[3], "perfect") == 1)
        return (84);
    body(ac, av);
    return (0);
}