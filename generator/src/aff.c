/*
** EPITECH PROJECT, 2021
** aff
** File description:
** print function
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../include/lib.h"
#include <stdio.h>
#include <sys/stat.h>

void aff(char **tab, struct coord c)
{
    int i = 0;

    for (; i < c.nbl && tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        if (i + 1 < c.nbl)
            my_putchar('\n');
    }
}