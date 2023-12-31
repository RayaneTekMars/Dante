/*
** EPITECH PROJECT, 2021
** body project
** File description:
** body.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "../include/lib.h"

char *refill_the_string(struct coord c)
{
    int i = 0;
    char *str = malloc(sizeof(char) * (c.nbc + 1) * (c.nbl + 1));

    for (; i < (c.nbc + 1) * (c.nbl + 1); i++) {
        for (int n = c.nbc; n > 0; n--, i++)
            str[i] = '*';
        if (i >= c.nbc * (c.nbl) + c.nbl)
            return (str);
        str[i] = '\n';
        i++;
        for (int n = c.nbc; n > 0; n--, i++)
            str[i] = 'X';
        str[i] = '\n';
    }
    return (str);
}