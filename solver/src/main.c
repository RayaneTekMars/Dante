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

int main(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return (84);
    if (geter(av[1]) == 1 || geter(av[2]) == 1)
        return (84);
    return (0);
}