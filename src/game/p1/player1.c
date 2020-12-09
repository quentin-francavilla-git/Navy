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

void fill_tmp1(t_glo *a)
{
    int z = 0;
    int j = 0;
    char *tmp = malloc(sizeof(char) * 1000);
    my_memset(tmp, 0, 999);

    z = my_strlen(glo_str) - 1;
    while (j <= 8) {
        if (glo_str[z] != 0) {
            tmp[j] = glo_str[z];
            j++;
        }
        z--;
    }
    j = 0;
    if (my_strcmp(tmp, "000010000") == 0) {
        a->won2 = 1;
    }
}

void won_player1(t_glo *a)
{
    if (a->won == 1) {
        my_putstr("\nI won\n");
        a->return_value = 0;
    }
    if (a->won2 == 1) {
        my_putstr("\nEnemy won\n");
        a->return_value = 1;
    }
}

void send_win_to_player2(t_glo *a)
{
    if (a->nb_of_x >= 14) {
        a->won = 1;
        send_fct(a, "000010000");
        my_putchar('\n');
    }
    else {
        a->turn = 0;
        turn_fct(a);
    }
}

void end_player1(t_glo *a, t_navy *m)
{
    if (a->won != 1)
        my_wait_signal();
    fill_tmp1(a);
    print_both_maps(a, m);
    reset(a);
    won_player1(a);
}

void player_1(t_glo *a, t_navy *m)
{
    char *input = malloc(sizeof(char) * 1000);
    if (!input)
        return;
    my_memset(input, 0, 999);
    handle_all_signals();
    input = user_input(input, a);
    if (my_strcmp(input, "null") == 0) {
        a->return_value = 84;
        return;
    }
    receive_hit_miss1(a, input);
    send_win_to_player2(a);
    if (my_strcmp(glo_str, "000000000") != 0
    && my_strcmp(glo_str, "111111111") != 0 && a->won == 0) {
        which_letter_and_case(a);
        send_hit_or_miss_player1(m, a);
    }
    end_player1(a, m);
}