/*
** EPITECH PROJECT, 2021
** dante
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i += 1;
    return (i);
}