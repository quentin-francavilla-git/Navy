/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

char glo_str[50];

char *int_to_binary_str(int n)
{
    char *p = malloc(sizeof(char) * 2000);
    int i = 0;
    my_memset(p, 0, 1999);

    while (n > 0) {
        if (n % 2 == 0)
            p[i] = '0';
        else
            p[i] = '1';
        i++;
        n = n / 2;
    }
    p = my_revstr(p);
    return (p);
}

int binary_to_decimal(int num)
{
    int binary_val;
    int decimal_val = 0;
    int base = 1;
    int rem;

    binary_val = num;
    while (num > 0) {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10;
        base = base * 2;
    }
    return (decimal_val);
}

void reset(t_glo *a)
{
    a->hit = 0;
    a->letter = 0;
    a->case_int = 0;
    a->letter_2 = 0;
    a->case_int_2 = 0;
    glo_str[0] = 0;
}