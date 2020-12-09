/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

void count_ships(t_navy *m, int *nb_numbers, int n, int i)
{
    if ((m->map[n][i] == '2' || m->map[n][i] == '3'
    || m->map[n][i] == '4' || m->map[n][i] == '5')
    && (i > 1))
        *nb_numbers += 1;
}

void no_diagonal_ship(t_navy *m, int i, int n, int *nb_numbers)
{
    if (m->map[n][i] == '2' && (m->map[n + 1][i + 1] == '2'
    || m->map[n + 1][i - 1] == '2' || m->map[n - 1][i + 1] == '2'
    || m->map[n - 1][i - 1] == '2'))
        *nb_numbers = 100;
}

int scan_map_errors(t_glo *a, t_navy *m)
{
    int n = 0;
    int i = 0;
    int nb_numbers = 0;

    while (n != 10) {
        while (i != 11) {
            count_ships(m, &nb_numbers, n, i);
            no_diagonal_ship(m, i, n, &nb_numbers);
            i++;
        }
        i = 0;
        n++;
    }
    if (nb_numbers != 14)
        return (84);
    else
        return (0);
}

int all_map_errors(char **av, t_glo *a, t_navy *m)
{
    if (a->is_2nd_player == 1) {
        if (parser_ship(m, av[2]) == 2)
            return (84);
        a->turn = 0;
    }
    else {
        if (parser_ship(m, av[1]) == 2)
            return (84);
        a->turn = 1;
    }
    if (scan_map_errors(a, m) == 84) {
        my_putstr("Wrong map format.\n");
        return (84);
    }
}