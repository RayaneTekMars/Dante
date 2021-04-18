/*
** EPITECH PROcountECT, 2021
** dante
** File description:
** solver_utils
*/

#include "../include/solver.h"

int line_len(char *maze)
{
    int i = 0;

    while (maze[i] != '\n')
        i += 1;
    return (i);
}

int line_nb(char *maze)
{
    int count = 0;

    for (int i = 0; maze[i] != '\0'; i += 1)
        if (maze[i] == '\n')
            count += 1;
    count += 1;
    return (count);
}

int is_valid_map(char *maze, int size)
{
    if (maze[0] != '*' || maze[size - 1] != '*')
        return (84);
    return (0);
}

int open_map(dante_t *dante, char *maze, int size)
{
    int fd = 0;
    int i = 0;

    dante->maze = malloc(sizeof(char) * size + 1);
    if ((fd = open(maze, O_RDONLY)) == -1)
        return (84);
    while ((i = read(fd, dante->maze, size)) <= 0);
    dante->maze[size] = '\0';
    if (is_valid_map(dante->maze, size) == 84)
        return (84);
    return (0);
}