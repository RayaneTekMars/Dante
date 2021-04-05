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

int body(char **args)
{
    int nb_lines = my_getnbr(args[1]);
    int nb_cols = my_getnbr(args[2]);
    coord c = {nb_lines, nb_cols + 1};
    char *str = refill_the_string(c);
    //my_putstr(str);
    char **tab = the_malloc(str, '\n');

    aff(tab, c);
    return (0);
}

char *refill_the_string(struct coord c)
{
    int i = 0;
    int n = 1;

    char *str = malloc(sizeof(char) * c.nbc * c.nbl + c.nbc - 1);
    for (; i < c.nbl * c.nbc + c.nbc - 1; i++) {
        str[i] = '*';
        if (i == c.nbc * n - 1) {
            str[i] = '\n';
            n++;
        }
    }
    return (str);
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