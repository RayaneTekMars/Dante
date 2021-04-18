/*
** EPITECH PROJECT, 2021
** dante
** File description:
** my_putstr
*/

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}