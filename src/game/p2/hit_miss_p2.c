/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../../include/get_next_line.h"
#include "../../../include/navy.h"
#include "../../../lib/my/lib.h"

char glo_str[50];

void send_hit_or_miss_player2(t_navy *m, t_glo *a)
{
    if ((m->map[a->case_int + 1][a->letter + 1] >= 50
    && m->map[a->case_int + 1][a->letter + 1] <= 53)) {
        send_fct(a, "000000000");
        m->map[a->case_int + 1][a->letter + 1] = 'x';
        my_putchar(a->letter + 64);
        my_put_nbr(a->case_int);
        my_putstr(": hit\n");
    }
    else if (m->map[a->case_int + 1][a->letter + 1] == 'x') {
        send_fct(a, "111111111");
        my_putchar(a->letter + 64);
        my_put_nbr(a->case_int);
        my_putstr(": missed\n");}
    else {
        send_fct(a, "111111111");
        my_putchar(a->letter + 64);
        my_put_nbr(a->case_int);
        my_putstr(": missed\n");
        m->map[a->case_int + 1][a->letter + 1] = 'o';}
}

void receive_hit_miss2(t_glo *a, char *input)
{
    send_fct(a, input);
    glo_str[0] = 0;
    my_wait_signal();
    if (my_strcmp(glo_str, "000000000") == 0) {
        my_putstr(a->stock_input);
        my_putstr(": hit\n\n");
        a->nb_of_x += 1;
        a->hit = 1;
    }
    else if (my_strcmp(glo_str, "111111111") == 0) {
        my_putstr(a->stock_input);
        my_putstr(": missed\n\n");
        a->hit = -1;
    }
    which_letter_and_case2(a, input);
    a->stock_input[0] = 0;
    glo_str[0] = 0;
}