/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

int init_map(t_navy *m)
{
    m->map[0] = malloc(sizeof(int) * 1000);
    m->map[0][0] = ' ';
    m->map[0][1] = '|';
    m->map[0][2] = 'A';
    m->map[0][3] = 'B';
    m->map[0][4] = 'C';
    m->map[0][5] = 'D';
    m->map[0][6] = 'E';
    m->map[0][7] = 'F';
    m->map[0][8] = 'G';
    m->map[0][9] = 'H';
    m->map[0][10] = '\n';
    init_map_ligne1(m);
}

int init_map_ligne1(t_navy *m)
{
    m->map[1] = malloc(sizeof(int) * 1000);
    m->map[1][0] = '-';
    m->map[1][1] = '+';
    m->map[1][2] = '-';
    m->map[1][3] = '-';
    m->map[1][4] = '-';
    m->map[1][5] = '-';
    m->map[1][6] = '-';
    m->map[1][7] = '-';
    m->map[1][8] = '-';
    m->map[1][9] = '-';
    m->map[1][10] = '\n';
    init_map_ligne2(m);
}

int init_map_ligne2(t_navy *m)
{
    m->map[2] = malloc(sizeof(int) * 1000);
    m->map[2][0] = '1';
    m->map[2][1] = '|';
    m->map[2][2] = '.';
    m->map[2][3] = '.';
    m->map[2][4] = '.';
    m->map[2][5] = '.';
    m->map[2][6] = '.';
    m->map[2][7] = '.';
    m->map[2][8] = '.';
    m->map[2][9] = '.';
    m->map[2][10] = '\n';
    init_map_ligne3(m);
}

int init_map_ligne3(t_navy *m)
{
    m->map[3] = malloc(sizeof(int) * 1000);
    m->map[3][0] = '2';
    m->map[3][1] = '|';
    m->map[3][2] = '.';
    m->map[3][3] = '.';
    m->map[3][4] = '.';
    m->map[3][5] = '.';
    m->map[3][6] = '.';
    m->map[3][7] = '.';
    m->map[3][8] = '.';
    m->map[3][9] = '.';
    m->map[3][10] = '\n';
    init_map_ligne4(m);
}

int init_map_ligne4(t_navy *m)
{
    m->map[4] = malloc(sizeof(int) * 1000);
    m->map[4][0] = '3';
    m->map[4][1] = '|';
    m->map[4][2] = '.';
    m->map[4][3] = '.';
    m->map[4][4] = '.';
    m->map[4][5] = '.';
    m->map[4][6] = '.';
    m->map[4][7] = '.';
    m->map[4][8] = '.';
    m->map[4][9] = '.';
    m->map[4][10] = '\n';
    init_map_ligne5(m);
}