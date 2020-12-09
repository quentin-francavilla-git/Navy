/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

int ship1(t_navy *m, char *line1)
{
    ship1_letter11(m, line1);
    ship1_number11(m, line1);
    ship1_letter12(m, line1);
    ship1_number12(m, line1);
    if (m->number11 == m->number12 || m->number11 == m->number12 - 1
    || m->number11 == m->number12 + 1
    && m->letter11 == m->letter12 || m->letter11 == m->letter12 - 1
    || m->letter11 == m->letter12 + 1) {
        m->map[m->number11][m->letter11] = '2';
        m->map[m->number12][m->letter12] = '2';
        return (1);
    }
    else
        return (2);
}

int ship1_letter11(t_navy *m, char *line)
{
    if (line[2] == 'A')
        m->letter11 = 2;
    if (line[2] == 'B')
        m->letter11 = 3;
    if (line[2] == 'C')
        m->letter11 = 4;
    if (line[2] == 'D')
        m->letter11 = 5;
    if (line[2] == 'E')
        m->letter11 = 6;
    if (line[2] == 'F')
        m->letter11 = 7;
    if (line[2] == 'G')
        m->letter11 = 8;
    if (line[2] == 'H')
        m->letter11 = 9;
}

int ship1_number11(t_navy *m, char *line)
{
    if (line[3] == '1')
        m->number11 = 2;
    if (line[3] == '2')
        m->number11 = 3;
    if (line[3] == '3')
        m->number11 = 4;
    if (line[3] == '4')
        m->number11 = 5;
    if (line[3] == '5')
        m->number11 = 6;
    if (line[3] == '6')
        m->number11 = 7;
    if (line[3] == '7')
        m->number11 = 8;
    if (line[3] == '8')
        m->number11 = 9;
}

int ship1_letter12(t_navy *m, char *line)
{
    if (line[5] == 'A')
        m->letter12 = 2;
    if (line[5] == 'B')
        m->letter12 = 3;
    if (line[5] == 'C')
        m->letter12 = 4;
    if (line[5] == 'D')
        m->letter12 = 5;
    if (line[5] == 'E')
        m->letter12 = 6;
    if (line[5] == 'F')
        m->letter12 = 7;
    if (line[5] == 'G')
        m->letter12 = 8;
    if (line[5] == 'H')
        m->letter12 = 9;
}

int ship1_number12(t_navy *m, char *line)
{
    if (line[6] == '1')
        m->number12 = 2;
    if (line[6] == '2')
        m->number12 = 3;
    if (line[6] == '3')
        m->number12 = 4;
    if (line[6] == '4')
        m->number12 = 5;
    if (line[6] == '5')
        m->number12 = 6;
    if (line[6] == '6')
        m->number12 = 7;
    if (line[6] == '7')
        m->number12 = 8;
    if (line[6] == '8')
        m->number12 = 9;
}