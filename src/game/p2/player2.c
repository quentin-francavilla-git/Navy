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

void won_player2(t_glo *a)
{
    if (a->won2 == 1) {
        my_putstr("\nEnemy won\n");
        a->return_value = 1;
    }
    else if (a->won == 1) {
        my_putstr("\nI won\n");
        a->return_value = 0;
    }
    else {
        reset(a);
        turn_fct(a);
    }
}

void fill_tmp2(t_glo *a)
{
    char *tmp = malloc(sizeof(char) * 1000);
    my_memset(tmp, 0, 999);
    int z = 0;
    int j = 0;

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
        my_putchar('\n');
        a->won2 = 1;
    }
}

void start_player2(t_glo *a, t_navy *m)
{
    which_letter_and_case(a);
    a->turn = 0;
    send_hit_or_miss_player2(m, a);
    my_wait_signal();
    fill_tmp2(a);
}

void player_2(t_glo *a, t_navy *m)
{
    char *input = malloc(sizeof(char) * 1000);
    if (!input)
        return;
    my_memset(input, 0, 999);
    start_player2(a, m);
    if (a->won2 == 0) {
        handle_all_signals();
        input = user_input(input, a);
        if (my_strcmp(input, "null") == 0) {
            a->return_value = 84;
            return;
        }
        receive_hit_miss2(a, input);
        if (a->nb_of_x >= 14) {
            a->won = 1;
            send_fct(a, "000010000");
        }
    }
    print_both_maps(a, m);
    won_player2(a);
}