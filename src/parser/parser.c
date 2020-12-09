/*
** EPITECH PROJECT, 2019
** gg
** File description:
** gg
*/

#include "../../include/get_next_line.h"
#include "../../include/navy.h"
#include "../../lib/my/lib.h"

int null_error(char *line1, char *line2, char *line3, char *line4)
{
    if (line1 == NULL || line2 == NULL || line3 == NULL || line4 == NULL) {
        write_error();
        return (2);
    }
}

int parser_ship(t_navy *m, char *filepath)
{
    int fd;
    char *line1;
    char *line2;
    char *line3;
    char *line4;
    line1 = malloc(sizeof(char) * 1000);
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (0);
    line1 = get_next_line(fd);
    line2 = get_next_line(fd);
    line3 = get_next_line(fd);
    line4 = get_next_line(fd);
    if (null_error(line1, line2, line3, line4) == 2)
        return (2);
    if (ship1(m, line1) == 2 || ship2(m, line2) == 2 || ship3(m, line3) == 2
    || ship4(m, line4) == 2) {
        write_error();
        return (2);
    }
}

int write_error(void)
{
    my_putstr("Wrong map format.\n");
}
