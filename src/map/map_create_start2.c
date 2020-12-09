/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

int init_map_ligne5(t_navy *m)
{
    m->map[5] = malloc(sizeof(int) * 1000);
    m->map[5][0] = '4';
    m->map[5][1] = '|';
    m->map[5][2] = '.';
    m->map[5][3] = '.';
    m->map[5][4] = '.';
    m->map[5][5] = '.';
    m->map[5][6] = '.';
    m->map[5][7] = '.';
    m->map[5][8] = '.';
    m->map[5][9] = '.';
    m->map[5][10] = '\n';
    init_map_ligne6(m);
}

int init_map_ligne6(t_navy *m)
{
    m->map[6] = malloc(sizeof(int) * 1000);
    m->map[6][0] = '5';
    m->map[6][1] = '|';
    m->map[6][2] = '.';
    m->map[6][3] = '.';
    m->map[6][4] = '.';
    m->map[6][5] = '.';
    m->map[6][6] = '.';
    m->map[6][7] = '.';
    m->map[6][8] = '.';
    m->map[6][9] = '.';
    m->map[6][10] = '\n';
    init_map_ligne7(m);
}

int init_map_ligne7(t_navy *m)
{
    m->map[7] = malloc(sizeof(int) * 1000);
    m->map[7][0] = '6';
    m->map[7][1] = '|';
    m->map[7][2] = '.';
    m->map[7][3] = '.';
    m->map[7][4] = '.';
    m->map[7][5] = '.';
    m->map[7][6] = '.';
    m->map[7][7] = '.';
    m->map[7][8] = '.';
    m->map[7][9] = '.';
    m->map[7][10] = '\n';
    init_map_ligne8(m);
}

int init_map_ligne8(t_navy *m)
{
    m->map[8] = malloc(sizeof(int) * 1000);
    m->map[8][0] = '7';
    m->map[8][1] = '|';
    m->map[8][2] = '.';
    m->map[8][3] = '.';
    m->map[8][4] = '.';
    m->map[8][5] = '.';
    m->map[8][6] = '.';
    m->map[8][7] = '.';
    m->map[8][8] = '.';
    m->map[8][9] = '.';
    m->map[8][10] = '\n';
    init_map_ligne9(m);
}

int init_map_ligne9(t_navy *m)
{
    m->map[9] = malloc(sizeof(int) * 1000);
    m->map[9][0] = '8';
    m->map[9][1] = '|';
    m->map[9][2] = '.';
    m->map[9][3] = '.';
    m->map[9][4] = '.';
    m->map[9][5] = '.';
    m->map[9][6] = '.';
    m->map[9][7] = '.';
    m->map[9][8] = '.';
    m->map[9][9] = '.';
    m->map[9][10] = '\n';
}