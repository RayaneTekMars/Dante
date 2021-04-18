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

char **the_wall(char **tab, struct coord c)
{
    int i = 1;

    for (int a = 0; i < c.nbl; i++) {
        a = (random() % c.nbc - 1);
        a < 0 || a >= c.nbc ? a = 0 : 0;
        i + 1 >= c.nbl ? a = c.nbc - 1 : 0;
        c.nbl == 1 || c.nbc == 1 ? a = 0 : 0;
        if (tab[i][a] != NULL)
            tab[i][a] = '*';
    }
    tab[c.nbl - 1][c.nbc - 1] = '*';
    return (tab);
}

char **imperfectv2(char **tab, int j, struct coord c, int b)
{
    int i = 1;

    for (int a = 0; i < c.nbl + j; i++) {
        a = (random() % c.nbc - 1);
        b = (random() % c.nbc);
        a < 0 || a >= c.nbc ? a = 0 : 0;
        b < 0 || b >= c.nbc ? b = 0 : 0;
        i + 1 >= c.nbl ? a = c.nbc - 1 : 0;
        c.nbl == 1 || c.nbc == 1 ? a = 0 : 0;
        c.nbl == 1 || c.nbc == 1 ? b = 0 : 0;
        tab[i][a] = '*';
        tab[i][b] = '*';
    }
    tab[c.nbl - 1][c.nbc - 1] = '*';
    return (tab);
}

char **the_wall_imperfect(char **tab, struct coord c)
{
    int j = -1;
    int b = 0;

    c.nbl % 2 == 1 ? j = 0 : 0;
    c.nbl == c.nbc ? j = 1 : 0;
    tab = imperfectv2(tab, j, c, b);
    return (tab);
}