/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/get_next_line.h"
#include "../include/navy.h"
#include "../lib/my/lib.h"

char glo_str[50];

void my_handler(int signum)
{
    if (signum == SIGUSR1) {
        signal(SIGUSR1, my_handler);
        my_strcat(glo_str, "0");
    }
    if (signum == SIGUSR2) {
        signal(SIGUSR2, my_handler);
        my_strcat(glo_str, "1");
    }
}

void handle_all_signals(void)
{
    signal(SIGUSR1, my_handler);
    signal(SIGUSR2, my_handler);
}

void my_wait_signal(void)
{
    int u = 0;

    while (u < 1000) {
        if (u > 100 && glo_str[0] == 0)
            u = 0;
        handle_all_signals();
        u++;
        usleep(10);
    }
}