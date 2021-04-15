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
#include "../../include/lib.h"

char **the_wall(char **tab, struct coord c)
{
    int i = 1;

    for (int a = 0; i < c.nbl - 1; i++) {
        a = (random() % c.nbc) + 1;
        tab[i][a] = '*';
    }
    if (c.nbl % 2 == 1)
        tab[c.nbl - 1][c.nbc - 1] = '*';
    else
        return (tab);
    return (tab);
}

int body(char **args)
{
    int nb_lines = my_getnbr(args[2]);
    int nb_cols = my_getnbr(args[1]);
    coord c = {nb_lines, nb_cols};
    char *str = refill_the_string(c);
    char **tab = the_malloc(str, '\n');

    tab = the_wall(tab, c);
    aff(tab, c);
    if (c.nbl % 2 == 0 && c.nbl >= c.nbc) {
        for (int i = 0; i < c.nbc - 1; i++)
            my_putchar('X');
        my_putchar('*');
    }
    free(str);
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return (84);
    if (geter(av[1]) == 1 || geter(av[2]) == 1)
        return (84);
    body(av);
    return (0);
}