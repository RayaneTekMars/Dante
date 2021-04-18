/*
** EPITECH PROJECT, 2021
** dante
** File description:
** main
*/

#include "../include/solver.h"

void delete_p(char *maze)
{
    int i = 0;

    while (maze[i] != '\0') {
        if (maze[i] == 'P')
            maze[i] = '*';
        i += 1;
    }
}

int error_handling(int ac, char **av)
{
    struct stat fs;

    if (stat(av[1], &fs) == -1)
        exit(84);
    if (ac != 2)
        exit(84);
    if ((fs.st_mode & __S_IFMT) != __S_IFREG)
        exit(84);
    return (fs.st_size);
}

int invalid_maze(char *maze)
{
    for (int i = 0; maze[i] != '\0'; i += 1) {
        if (maze[i] != 'X' && maze[i] != '*' && maze[i] != '\n')
            return (84);
    }
    return (0);
}

void var_setup(dante_t *solver)
{
    solver->maze = NULL;
    solver->x = 0;
    solver->y = 0;
    solver->size = 0;
}

int main(int ac, char **av)
{
    dante_t solver;

    var_setup(&solver);
    solver.size = error_handling(ac, av);
    if (solver.size == 0) {
        my_putstr("no solution found");
        return (84);
    }
    if (open_map(&solver, av[1], solver.size) == 84 \
        || invalid_maze(solver.maze) == 84)
        return (84);
    solver.x = line_len(solver.maze);
    solver.y = line_nb(solver.maze);
    good_path(&solver);
    delete_p(solver.maze);
    write(1, solver.maze, solver.size);
    free(solver.maze);
    return (0);
}