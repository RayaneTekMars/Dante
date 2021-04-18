/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solver
*/

#ifndef SOLVER_H_
#define SOLVER_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct dante {
    char *maze;
    int x;
    int y;
    int size;
} dante_t;

#define VAR int i = 0;  \
        int count = 0;  \
        int tmp = 0;    \

void my_putstr(char *);
int my_strlen(char *);

#endif /* !SOLVER_H_ */