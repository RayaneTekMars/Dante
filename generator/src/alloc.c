/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../include/lib.h"
#include <stdio.h>
#include <sys/stat.h>

int wrd(char *str, char l)
{
    int nb = 0;
    int i = 0;

    while (str[i]) {
        if (str[i] == l && str[i + 1])
            nb++;
        i++;
    }
    return (nb + 1);
}

int wl(char *str, char l)
{
    int i = 0;

    while (str[i] && str[i] != l)
        i++;
    return (i);
}

char **the_malloc(char *str, char l)
{
    char **tab;
    far a = {0, 0, 0};

    tab = malloc(sizeof(char *) * (wrd(str, l) + 1));
    while (str[a.i]) {
        if (str[a.i] == l) {
            while (str[a.i] == l)
                a.i++;
            a.j++;
            a.k = 0;
        }
        tab[a.j] = malloc(sizeof(char) * (wl(str + a.i, l) + 1));
        while (str[a.i] != l && str[a.i])
            tab[a.j][a.k++] = str[a.i++];
        tab[a.j][a.k] = 0;
    }
    tab[a.j + 1] = 0;
    return (tab);
}