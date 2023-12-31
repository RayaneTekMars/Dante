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
int my_scmp(char *s1, char *s2);
int my_getnbr(char *str);
int neg(int cmt, int res);
int gtr(char *str);
int	wrd(char *str, char l);
int	wl(char *str, char l);
char **the_malloc(char *str, char l);
char *refill_the_string(struct coord c);
void aff(char **tab, struct coord c);
int body(int ac, char **args);
char **the_wall_imperfect(char **tab, struct coord c);
int choice(char **tab, struct coord c, char **av, int ac);
char **imperfectv2(char **tab, int j, struct coord c, int b);

#endif /* !LIB_H_ */
