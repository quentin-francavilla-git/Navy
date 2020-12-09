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

void get_child_pid(t_glo *a)
{
    if (a->one_pid == 0) {
        my_strcat(a->pid, glo_str);
        a->one_pid = 1;
    }
    my_putstr("\nenemy connected\n\n");
}

void start_server(pid_t pid, t_glo *a)
{
    my_putstr("my_pid: ");
    my_put_nbr(pid);
    my_putchar('\n');

    if (a->is_2nd_player == 0) {
        my_putstr("waiting for enemy connection...\n");
        my_wait_signal();
        get_child_pid(a);
        send_fct(a, "111");
        my_wait_signal();
    }
}

void start_client(t_glo *a, int int_pid, pid_t pid, char *str)
{
    int u = 0;
    char *tmp = malloc(sizeof(char) * 1000);
    my_memset(tmp, 0, 999);

    if (a->is_2nd_player == 1){
        a->is_2nd_player = 1;
        str = my_itoa(pid);
        int_pid = my_convert_char_int(str);
        str = int_to_binary_str(int_pid);
        send_fct(a, str);
        my_wait_signal();
        my_putstr("successfully connected\n\n");
    }
}