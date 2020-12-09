/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/get_next_line.h"
#include "../include/navy.h"
#include "../lib/my/lib.h"

void start_game(t_glo *a, t_navy *m, char **av)
{
    print_both_maps(a, m);
    turn_fct(a);
}