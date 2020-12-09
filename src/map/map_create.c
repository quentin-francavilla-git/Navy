/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

int mapp(t_navy *m)
{
    m->map = malloc(sizeof(int *) * 1000);
    init_map(m);
}

int print_map(t_navy *m)
{
    int i = 0;
    int n = 0;

    while (n != 10) {
        while (i != 11) {
            if (i > 2 && n != 1)
                my_putchar(' ');
            else if (n == 1 && i > 2 && i < 10)
                my_putchar('-');
            my_putchar(m->map[n][i]);
            i++;
        }
        i = 0;
        n++;
    }
}