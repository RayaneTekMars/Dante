/*
** EPITECH PROJECT, 2021
** aff
** File description:
** print function
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../include/lib.h"
#include <stdio.h>
#include <sys/stat.h>

void aff(char **tab, struct coord c)
{
    int i = 0;
    int j = 0;

    for (; i < c.nbl; i++) {
        j = 0;
        for (; j < c.nbc - 1; j++) {
            my_putchar(tab[i][j]);
        }
        my_putchar('\n');
    }
}