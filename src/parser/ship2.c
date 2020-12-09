/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

int ship2(t_navy *m, char *line)
{
    ship2_letter21(m, line);
    ship2_number21(m, line);
    ship2_letter22(m, line);
    ship2_number22(m, line);
    if (m->number21 == m->number22 && m->letter21 == m->letter22 - 2
    || m->number21 == m->number22 - 2 && m->letter21 == m->letter22
    || m->number21 == m->number22 && m->letter21 == m->letter22 + 2
    || m->number21 == m->number22 + 2 && m->letter21 == m->letter22) {
        m->map[m->number21][m->letter21] = '3';
        m->map[m->number22][m->letter22] = '3';
        put_ships2(m);
        return (1);
    }
    else
        return (2);
}

int ship2_letter21(t_navy *m, char *line)
{
    if (line[2] == 'A')
        m->letter21 = 2;
    if (line[2] == 'B')
        m->letter21 = 3;
    if (line[2] == 'C')
        m->letter21 = 4;
    if (line[2] == 'D')
        m->letter21 = 5;
    if (line[2] == 'E')
        m->letter21 = 6;
    if (line[2] == 'F')
        m->letter21 = 7;
    if (line[2] == 'G')
        m->letter21 = 8;
    if (line[2] == 'H')
        m->letter21 = 9;
}

int ship2_number21(t_navy *m, char *line)
{
    if (line[3] == '1')
        m->number21 = 2;
    if (line[3] == '2')
        m->number21 = 3;
    if (line[3] == '3')
        m->number21 = 4;
    if (line[3] == '4')
        m->number21 = 5;
    if (line[3] == '5')
        m->number21 = 6;
    if (line[3] == '6')
        m->number21 = 7;
    if (line[3] == '7')
        m->number21 = 8;
    if (line[3] == '8')
        m->number21 = 9;
}

int ship2_letter22(t_navy *m, char *line)
{
    if (line[5] == 'A')
        m->letter22 = 2;
    if (line[5] == 'B')
        m->letter22 = 3;
    if (line[5] == 'C')
        m->letter22 = 4;
    if (line[5] == 'D')
        m->letter22 = 5;
    if (line[5] == 'E')
        m->letter22 = 6;
    if (line[5] == 'F')
        m->letter22 = 7;
    if (line[5] == 'G')
        m->letter22 = 8;
    if (line[5] == 'H')
        m->letter22 = 9;
}

int ship2_number22(t_navy *m, char *line)
{
    if (line[6] == '1')
        m->number22 = 2;
    if (line[6] == '2')
        m->number22 = 3;
    if (line[6] == '3')
        m->number22 = 4;
    if (line[6] == '4')
        m->number22 = 5;
    if (line[6] == '5')
        m->number22 = 6;
    if (line[6] == '6')
        m->number22 = 7;
    if (line[6] == '7')
        m->number22 = 8;
    if (line[6] == '8')
        m->number22 = 9;
}