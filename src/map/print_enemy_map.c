/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

void save_map(t_glo *a, t_navy *m, int *j, int z)
{
    while (*j != 11) {
        if (*j < 11)
            a->map_enemy[z][*j] = m->map[z][*j];
        else
            a->map_enemy[z][*j] = '\n';
        *j += 1;
    }
}

void create_enemy_map(t_glo *a, t_navy *m)
{
    int z = 0;
    int j = 0;
    if (a->one_time_enemy_map == 0) {
        a->map_enemy = malloc(sizeof(int **) * 1000);
        while (z != 10) {
            a->map_enemy[z] = malloc(sizeof(int *) * 1000);
            save_map(a, m, &j, z);
            j = 0;
            z++;
        }
    }
    a->one_time_enemy_map = 1;
}

void hit_or_miss_enemy_map(t_glo *a, t_navy *m)
{
    if (a->case_int_2 != 0) {
        if (a->hit == 1)
            a->map_enemy[a->case_int_2 + 1][a->letter_2 + 1] = 'x';
        else if (a->hit == -1
        && a->map_enemy[a->case_int_2 + 1][a->letter_2 + 1] != 'x')
            a->map_enemy[a->case_int_2 + 1][a->letter_2 + 1] = 'o';
    }
}

void char_enemy_map(t_glo *a, int i, int n)
{
    if (i > 2 && n != 1)
        my_putchar(' ');
    else if (n == 1 && i > 2 && i < 10)
        my_putchar('-');
    if (a->map_enemy[n][i] != '.' && n > 1 && i > 1
    && a->map_enemy[n][i] != '\n' && (n != a->case_int_2 + 1
    || i != a->letter_2 + 1) && (a->map_enemy[n][i] != 'x'
    && a->map_enemy[n][i] != 'o'))
        my_putchar('.');
    else
        my_putchar(a->map_enemy[n][i]);
}

void print_enemy_map(t_navy *m, t_glo *a)
{
    int n = 0;
    int i = 0;

    my_putstr("enemy's positions:\n");
    create_enemy_map(a, m);
    hit_or_miss_enemy_map(a, m);
    while (n != 10) {
        while (i != 11) {
            char_enemy_map(a, i, n);
            i++;
        }
        i = 0;
        n++;
    }
}