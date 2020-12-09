/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

int ship4(t_navy *m, char *line)
{
    ship4_letter41(m, line);
    ship4_number41(m, line);
    ship4_letter42(m, line);
    ship4_number42(m, line);
    if (m->number41 == m->number42 && m->letter41 == m->letter42 - 4
    || m->number41 == m->number42 - 4 && m->letter41 == m->letter42
    || m->number41 == m->number42 && m->letter41 == m->letter42 + 4
    || m->number41 == m->number42 + 4 && m->letter41 == m->letter42) {
        m->map[m->number41][m->letter41] = '5';
        m->map[m->number42][m->letter42] = '5';
        put_ships4(m);
        return (1);
    }
    else
        return (2);
}

int ship4_letter41(t_navy *m, char *line)
{
    if (line[2] == 'A')
        m->letter41 = 2;
    if (line[2] == 'B')
        m->letter41 = 3;
    if (line[2] == 'C')
        m->letter41 = 4;
    if (line[2] == 'D')
        m->letter41 = 5;
    if (line[2] == 'E')
        m->letter41 = 6;
    if (line[2] == 'F')
        m->letter41 = 7;
    if (line[2] == 'G')
        m->letter41 = 8;
    if (line[2] == 'H')
        m->letter41 = 9;
}

int ship4_number41(t_navy *m, char *line)
{
    if (line[3] == '1')
        m->number41 = 2;
    if (line[3] == '2')
        m->number41 = 3;
    if (line[3] == '3')
        m->number41 = 4;
    if (line[3] == '4')
        m->number41 = 5;
    if (line[3] == '5')
        m->number41 = 6;
    if (line[3] == '6')
        m->number41 = 7;
    if (line[3] == '7')
        m->number41 = 8;
    if (line[3] == '8')
        m->number41 = 9;
}

int ship4_letter42(t_navy *m, char *line)
{
    if (line[5] == 'A')
        m->letter42 = 2;
    if (line[5] == 'B')
        m->letter42 = 3;
    if (line[5] == 'C')
        m->letter42 = 4;
    if (line[5] == 'D')
        m->letter42 = 5;
    if (line[5] == 'E')
        m->letter42 = 6;
    if (line[5] == 'F')
        m->letter42 = 7;
    if (line[5] == 'G')
        m->letter42 = 8;
    if (line[5] == 'H')
        m->letter42 = 9;
}

int ship4_number42(t_navy *m, char *line)
{
    if (line[6] == '1')
        m->number42 = 2;
    if (line[6] == '2')
        m->number42 = 3;
    if (line[6] == '3')
        m->number42 = 4;
    if (line[6] == '4')
        m->number42 = 5;
    if (line[6] == '5')
        m->number42 = 6;
    if (line[6] == '6')
        m->number42 = 7;
    if (line[6] == '7')
        m->number42 = 8;
    if (line[6] == '8')
        m->number42 = 9;
}
