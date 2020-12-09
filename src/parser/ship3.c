/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

int ship3(t_navy *m, char *line)
{
    ship3_letter31(m, line);
    ship3_number31(m, line);
    ship3_letter32(m, line);
    ship3_number32(m, line);
    if (m->number31 == m->number32 && m->letter31 == m->letter32 - 3
    || m->number31 == m->number32 - 3 && m->letter31 == m->letter32
    || m->number31 == m->number32 && m->letter31 == m->letter32 + 3
    || m->number31 == m->number32 + 3 && m->letter31 == m->letter32) {
        m->map[m->number31][m->letter31] = '4';
        m->map[m->number32][m->letter32] = '4';
        put_ships3(m);
        return (1);
    }
    else
        return (2);
}

int ship3_letter31(t_navy *m, char *line)
{
    if (line[2] == 'A')
        m->letter31 = 2;
    if (line[2] == 'B')
        m->letter31 = 3;
    if (line[2] == 'C')
        m->letter31 = 4;
    if (line[2] == 'D')
        m->letter31 = 5;
    if (line[2] == 'E')
        m->letter31 = 6;
    if (line[2] == 'F')
        m->letter31 = 7;
    if (line[2] == 'G')
        m->letter31 = 8;
    if (line[2] == 'H')
        m->letter31 = 9;
}

int ship3_number31(t_navy *m, char *line)
{
    if (line[3] == '1')
        m->number31 = 2;
    if (line[3] == '2')
        m->number31 = 3;
    if (line[3] == '3')
        m->number31 = 4;
    if (line[3] == '4')
        m->number31 = 5;
    if (line[3] == '5')
        m->number31 = 6;
    if (line[3] == '6')
        m->number31 = 7;
    if (line[3] == '7')
        m->number31 = 8;
    if (line[3] == '8')
        m->number31 = 9;
}

int ship3_letter32(t_navy *m, char *line)
{
    if (line[5] == 'A')
        m->letter32 = 2;
    if (line[5] == 'B')
        m->letter32 = 3;
    if (line[5] == 'C')
        m->letter32 = 4;
    if (line[5] == 'D')
        m->letter32 = 5;
    if (line[5] == 'E')
        m->letter32 = 6;
    if (line[5] == 'F')
        m->letter32 = 7;
    if (line[5] == 'G')
        m->letter32 = 8;
    if (line[5] == 'H')
        m->letter32 = 9;
}

int ship3_number32(t_navy *m, char *line)
{
    if (line[6] == '1')
        m->number32 = 2;
    if (line[6] == '2')
        m->number32 = 3;
    if (line[6] == '3')
        m->number32 = 4;
    if (line[6] == '4')
        m->number32 = 5;
    if (line[6] == '5')
        m->number32 = 6;
    if (line[6] == '6')
        m->number32 = 7;
    if (line[6] == '7')
        m->number32 = 8;
    if (line[6] == '8')
        m->number32 = 9;
}
