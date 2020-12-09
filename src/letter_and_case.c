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

void which_letter_and_case(t_glo *a)
{
    char *str = malloc(sizeof(char) * 5000);
    int i = 0;
    my_memset(str, 0, 4999);
    int nb2_decimal = my_getnbr_base(glo_str, "01");

    str = my_itoa(nb2_decimal);

    if (str[1] >= '7' && str[1] <= '9')
        a->letter = str[1] + 9 - 63;
    else if (str[1] >= '0' && str[1] <= '4')
        a->letter = str[1] + 19 - 63;

    a->case_int = str[2] - '0';
}

void which_letter_and_case2(t_glo *a, char *input)
{
    char *str = malloc(sizeof(char) * 5000);
    int i = 0;
    my_memset(str, 0, 4999);
    int nb2_decimal = my_getnbr_base(input, "01");

    str = my_itoa(nb2_decimal);

    if (str[1] >= '7' && str[1] <= '9')
        a->letter_2 = str[1] + 9 - 63;
    else if (str[1] >= '0' && str[1] <= '4')
        a->letter_2 = str[1] + 19 - 63;

    a->case_int_2 = str[2] - '0';
}