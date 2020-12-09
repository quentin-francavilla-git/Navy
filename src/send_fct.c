/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/get_next_line.h"
#include "../include/navy.h"
#include "../lib/my/lib.h"

void send_to_player1(t_glo *a, char *input)
{
    int i = 0;

    while (input[i] != 0) {
        if (input[i] == '0')
            kill(a->int_av, SIGUSR1);
        if (input[i] == '1')
            kill(a->int_av, SIGUSR2);
        i++;
        usleep(10);
    }
    i = 0;
}

void send_to_player2(t_glo *a, char *input)
{
    int i = 0;
    long long child_pid_tmp = 0;
    int child_pid = 0;

    child_pid = my_getnbr_base(a->pid, "01");
    my_putchar(0);
    while (input[i] != 0) {
        if (input[i] == '0')
            kill(child_pid, SIGUSR1);
        if (input[i] == '1')
            kill(child_pid, SIGUSR2);
        i++;
        usleep(10);
    }
    i = 0;
}

void send_fct(t_glo *a, char *input)
{
    int i = 0;

    if (a->is_2nd_player == 1) {
        send_to_player1(a, input);
    }
    else
        send_to_player2(a, input);
}