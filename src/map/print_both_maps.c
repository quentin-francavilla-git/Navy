/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

void print_both_maps(t_glo *a, t_navy *m)
{
    my_putstr("my positions:\n");
    print_map(m);
    my_putchar('\n');
    print_enemy_map(m, a);
}