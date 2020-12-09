/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/get_next_line.h"
#include "../include/navy.h"
#include "../lib/my/lib.h"

char *user_input(char *input, t_glo *a)
{
    int nb = 0;
    int good = 0;
    a->stock_input = malloc(sizeof(char) * 1000);
    my_memset(a->stock_input, 0, 999);
    my_putchar('\n');
    while (good == 0) {
        my_putstr("attack: ");
        input = get_next_line(0);
        if (input == NULL)
            return ("null");
        my_strcat(a->stock_input, input);
        if (LETTER || NUMBER || WRONG_ARG) {
            my_putstr("wrong position\n");
            a->stock_input[0] = 0;}
        else
            good = 1;
    }
    nb = my_convert_char_int(input);
    input = int_to_binary_str(nb);
    return (input);
}