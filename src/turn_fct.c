/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/get_next_line.h"
#include "../include/navy.h"
#include "../lib/my/lib.h"

void turn_fct(t_glo *a)
{
    if (a->turn == 0) {
        my_putstr("\nwaiting for enemy's attack...\n");
        my_wait_signal();
    }
}