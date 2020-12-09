/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

char glo_str[50];

int navy(t_glo *a, char **av, t_navy *m)
{
    a->won = 0;
    a->won2 = 0;
    a->return_value = 2;
    glo_str[0] = 0;
    start_game(a, m, av);

    while (a->won == 0 && a->won2 == 0 && a->return_value != 84) {
        if (a->is_2nd_player == 1) {
            player_2(a, m);
        }
        else {
            player_1(a, m);
        }
    }
    return (a->return_value);
}