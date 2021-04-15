/*
** EPITECH PROJECT, 2020
** lib
** File description:
** lib
*/

#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char const *str)
{
    int var = 0;

    while (str[var] != '\0') {
        var = var + 1;
    }
    return (var);
}

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}

int my_put_nbr(int nb)
{
    int b = 0;
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        b = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(b + 48);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}
