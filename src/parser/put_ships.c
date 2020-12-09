/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

void put_ships2(t_navy *m)
{
    if (m->number21 == m->number22 && m->letter21 > m->letter22)
        m->map[m->number21][m->letter21 - 1] = '3';
    if (m->number21 == m->number22 && m->letter21 < m->letter22)
        m->map[m->number21][m->letter21 + 1] = '3';
    if (m->letter21 == m->letter22 && m->number21 > m->number22)
        m->map[m->number21 - 1][m->letter21] = '3';
    if (m->letter21 == m->letter22 && m->number21 < m->number22)
        m->map[m->number21 + 1][m->letter21] = '3';
}

void put_ships3(t_navy *m)
{
    if (m->number31 == m->number32 && m->letter31 > m->letter32) {
        m->map[m->number31][m->letter31 - 1] = '4';
        m->map[m->number31][m->letter31 - 2] = '4';
    }
    if (m->number31 == m->number32 && m->letter31 < m->letter32) {
        m->map[m->number31][m->letter31 + 1] = '4';
        m->map[m->number31][m->letter31 + 2] = '4';
    }
    if (m->letter31 == m->letter32 && m->number31 > m->number32) {
        m->map[m->number31 - 1][m->letter31] = '4';
        m->map[m->number31 - 2][m->letter31] = '4';
    }
    if (m->letter31 == m->letter32 && m->number31 < m->number32) {
        m->map[m->number31 + 1][m->letter31] = '4';
        m->map[m->number31 + 2][m->letter31] = '4';
    }
}

void put_ships4(t_navy *m)
{
    if (m->number41 == m->number42 && m->letter41 > m->letter42) {
        m->map[m->number41][m->letter41 - 1] = '5';
        m->map[m->number41][m->letter41 - 2] = '5';
        m->map[m->number41][m->letter41 - 3] = '5';
    }
    if (m->number41 == m->number42 && m->letter41 < m->letter42) {
        m->map[m->number41][m->letter41 + 1] = '5';
        m->map[m->number41][m->letter41 + 2] = '5';
        m->map[m->number41][m->letter41 + 3] = '5';
    }
    if (m->letter41 == m->letter42 && m->number41 > m->number42) {
        m->map[m->number41 - 1][m->letter41] = '5';
        m->map[m->number41 - 2][m->letter41] = '5';
        m->map[m->number41 - 3][m->letter41] = '5';
    }
    if (m->letter41 == m->letter42 && m->number41 < m->number42) {
        m->map[m->number41 + 1][m->letter41] = '5';
        m->map[m->number41 + 2][m->letter41] = '5';
        m->map[m->number41 + 3][m->letter41] = '5';
    }
}