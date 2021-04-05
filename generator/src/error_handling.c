/*
** EPITECH PROJECT, 2021
** errors
** File description:
** eroor gestion
*/

int geter(char *str)
{
    int i = 0;

    for (; str[i + 1] != '\0';) {
        if (str[i] > 47 && str[i] < 58)
            i++;
        else
            return (1);
    }
    return (0);
}