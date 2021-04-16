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
    int j = -1;

    c.nbl % 2 == 1 ? j = 0 : 0;
    c.nbl == c.nbc ? j = 1 : 0;
    for (int a = 0; i < c.nbl + j; i++) {
        a = (random() % c.nbc) - 1;
        a > c.nbc ? a-- : 0;
        a < 0 ? a = 0 : 0;
        i + 1 == c.nbl ? a = c.nbc - 1 : 0;
        tab[i][a] = '*';
    }
    if (c.nbl % 2 == 1 || c.nbl < c.nbc)
        tab[c.nbl - 1][c.nbc - 1] = '*';
    else
        return (tab);
    return (tab);
}

char **the_wall_imperfect(char **tab, struct coord c)
{
    int i = 1;
    int j = -1;
    int b = 0;

    c.nbl % 2 == 1 ? j = 0 : 0;
    c.nbl == c.nbc ? j = 1 : 0;
    for (int a = 0; i < c.nbl + j; i++) {
        a = (random() % c.nbc) - 1;
        a > c.nbc ? a-- : 0;
        a < 0 ? a = 0 : 0;
        i + 1 == c.nbl ? a = c.nbc - 1 : 0;
        b == a ? b++ : 0;
        b < 0 || b > c.nbc ? b = 0 : 0;
        tab[i][a] = '*';
        tab[i][b] = '*';
    }
    if (c.nbl % 2 == 1 || c.nbl < c.nbc)
        tab[c.nbl - 1][c.nbc - 1] = '*';
    else
        return (tab);
    return (tab);
}

int body(int ac, char **args)
{
    int nb_lines = my_getnbr(args[2]);
    int nb_cols = my_getnbr(args[1]);
    coord c = {nb_lines, nb_cols};
    char *str = refill_the_string(c);
    char **tab = the_malloc(str, '\n');

    if (my_scmp(args[3], "[perfect]") == 0) {
        tab = the_wall(tab, c);
        aff(tab, c);
        if (c.nbl % 2 == 0 && c.nbl > c.nbc) {
            for (int i = 0; i < c.nbc - 1; i++)
                my_putchar('X');
            my_putchar('*');
        }
    } else {
        tab = the_wall_imperfect(tab, c);
        aff(tab, c);
        if (c.nbl % 2 == 0 && c.nbl > c.nbc) {
            for (int i = 0; i < c.nbc - 1; i++)
                my_putchar('X');
            my_putchar('*');
        }
    }
    free(str);
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return (84);
    if (gtr(av[1]) == 1 || gtr(av[2]) == 1)
        return (84);
    if (ac == 4 && my_scmp(av[3], "[perfect]") == 1)
        return (84);
    body(ac, av);
    return (0);
}