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

void variables(t_glo *a)
{
    a->is_connected = 0;
    a->one_pid = 0;
    a->hit = 0;
    a->is_2nd_player = 0;
    a->one_time_enemy_map = 0;
    a->pid = malloc(sizeof(char) * 2000);
    a->nb_of_x = 0;
    my_memset(a->pid, 0, 1999);
}

int chose_player(t_glo *a, char **av)
{
    if (!av[1])
        return (84);

    if (av[2]) {
        a->is_2nd_player = 1;
        a->int_av = my_getnbr(av[1]);
    }
}

int main(int ac, char **av)
{
    t_glo *a = malloc(sizeof(t_glo));
    int error_fork = 0;
    int int_pid;
    pid_t pid = getpid();
    pid_t ppid;
    t_navy *m = malloc(sizeof(t_navy));
    char *str = malloc(sizeof(char) * 1000);
    variables(a);
    if (!str)
        return (84);
    my_memset(str, 0, 999);
    my_memset(glo_str, 0, 29);
    chose_player(a, av);
    mapp(m);
    if (all_map_errors(av, a, m) == 84)
        return (84);
    start_server(pid, a);
    start_client(a, int_pid, pid, str);
    return (navy(a, av, m));
}