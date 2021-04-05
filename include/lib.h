/*
** EPITECH PROJECT, 2021
** lib.h
** File description:
** LIB_H_
*/

#ifndef LIB_H_
#define LIB_H_

typedef struct far
{
    int i;
    int j;
    int k;
}far;

typedef struct coord{
    int nbl;
    int nbc;
}coord;

int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
void my_putchar(char c);
int my_getnbr(char *str);
int neg(int cmt, int res);
int geter(char *str);
int	wrd(char *str, char l);
int	wl(char *str, char l);
char **the_malloc(char *str, char l);
char *refill_the_string(struct coord c);
void aff(char **tab, struct coord c);

#endif /* !LIB_H_ */
