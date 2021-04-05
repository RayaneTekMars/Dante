/*
** EPITECH PROJECT, 2020
** lib 2
** File description:
** lib
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "../../include/lib.h"

int neg(int cmt, int res)
{
    if (cmt % 2 == 0) {
        return (res);
    } else {
        return (res * - 1);
    }
}

int my_getnbr(char *str)
{
    int res = 0;
    int i = 0;
    int j = 0;
    int cmt = 0;

    while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57) {
        if (j <= 0) {
            if (str[i] == '-') {
                cmt++;
            }
            while (str[i] >= 48 && str[i] <= 57) {
                res = res * 10 + str[i] - 48;
                i++;
                j++;
            }
        }
        i++;
    }
    return (neg(cmt, res));
}