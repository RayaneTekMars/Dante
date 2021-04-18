/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solver
*/

#include "../include/solver.h"

int check_pathes(int i, char c, dante_t *sol)
{
    int count = 0;

    if (i > sol->x && sol->maze[i - sol->x - 1] == c)
        count += 1;
    if (sol->maze[i + sol->x + 1] == c && i < (sol->size - sol->x))
        count += 1;
    if (sol->maze[i + 1] == c)
        count += 1;
    if (i > 0 && sol->maze[i - 1] == c)
        count += 1;
    return (count);
}

int follow_path(int i, char c, dante_t *sol)
{
    if (sol->maze[i + 1] == c)
        return (i + 1);
    if (sol->maze[i + sol->x + 1] == c && i < (sol->size - sol->x))
        return (i + (sol->x + 1));
    if (i > sol->x && sol->maze[i - sol->x - 1] == c)
        return (i - (sol->x + 1));
    if (i > 0 && sol->maze[i - 1] == c)
        return (i - 1);
    write(1, "no solution found", 17);
    free(sol->maze);
    exit(84);
}

int go_back(dante_t *sol, int *tmp, int i)
{
    sol->maze[i] = 'P';
    while ((check_pathes(i, '*', sol) == 0)) {
        i = follow_path(i, 'o', sol);
        sol->maze[i] = 'P';
    }
    sol->maze[i] = 'o';
    *tmp = 0;
    return (i);
}

void good_path(dante_t *sol)
{
    VAR

    sol->maze[i] = 'o';
    while (i != (sol->size - 1)) {
        if ((count = check_pathes(i, '*', sol)) > 1)
            tmp = 1;
        else if (count == 0 && tmp == 0) {
            i = go_back(sol, &tmp, i);
            continue;
        }
        else
            if (count == 0 && tmp == 1) {
                i = go_back(sol, &tmp, i);
                sol->maze[i] = 'o';
                count = 0;
                continue;
            }
        i = follow_path(i, '*', sol);
        sol->maze[i] = 'o';
    }
}