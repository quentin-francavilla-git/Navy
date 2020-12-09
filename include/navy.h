/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef NAVY_H
#define NAVY_H

#include "../lib/my/lib.h"
#include <sys/types.h>
#include <dirent.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <sys/sysmacros.h>
#include <limits.h>
#include <signal.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

typedef struct s_la
{
    char *value;
    struct s_la *next;
    struct s_la *tmp_a;
} t_la;

typedef struct s_lb
{
    char *value;
    struct s_lb *next;
    struct s_lb *tmp_a;
} t_lb;

typedef struct s_arg
{
    char *arg;
    int arg_next;
} t_arg;

typedef struct s_flags
{

} t_flags;

typedef struct s_glo
{
    int *status;
    int is_connected;
    int is_2nd_player;
    int letter;
    int case_int;
    int one_pid;
    char *pid;
    int int_av;
    int recieve_pid;
    int turn;
    int nb_of_x;
    char *stock_input;
    int case_int_2;
    int letter_2;
    int one_time_enemy_map;
    int hit;
    int **map_enemy;
    int return_value;
    int won;
    int won2;
    t_flags      *_f;
} t_glo;

typedef struct navy
{
    int **map;
    int letter11;
    int number11;
    int letter12;
    int number12;
    
    int letter21;
    int number21;
    int letter22;
    int number22;

    int letter31;
    int number31;
    int letter32;
    int number32;

    int letter41;
    int number41;
    int letter42;
    int number42;
} t_navy;

void player_2(t_glo *a, t_navy *m);
void send_hit_or_miss_player2(t_navy *m, t_glo *a);
void receive_hit_miss2(t_glo *a, char *input);
void player_1(t_glo *a, t_navy *m);
void send_hit_or_miss_player1(t_navy *m, t_glo *a);
void receive_hit_miss1(t_glo *a, char *input);
int chose_player(t_glo *a, char **av);
int navy(t_glo *a, char **av, t_navy *m);
void start_game(t_glo *a, t_navy *m, char **av);
void turn_fct(t_glo *a);
char *user_input(char *input, t_glo *a);
void which_letter_and_case2(t_glo *a, char *input);
void which_letter_and_case(t_glo *a);
void send_fct(t_glo *a, char *input);
void get_child_pid(t_glo *a);
void start_server(pid_t pid, t_glo *a);
void start_client(t_glo *a, int int_pid, pid_t pid, char *str);
void handle_all_signals(void);
void my_handler(int signum);
int all_map_errors(char **av, t_glo *a, t_navy *m);
void print_both_maps(t_glo *a, t_navy *m);
void reset(t_glo *a);
char *int_to_binary_str(int n);
int binary_to_decimal(int num);
void print_enemy_map(t_navy *m, t_glo *a);
void my_wait_signal(void);

// parser map

int null_error(char *line1, char *line2, char *line3, char *line4);
void put_ships2(t_navy *m);
void put_ships3(t_navy *m);
void put_ships4(t_navy *m);
int mapp(t_navy *m);
int print_map(t_navy *m);
int init_map(t_navy *m);
int init_map_ligne1(t_navy *m);
int init_map_ligne2(t_navy *m);
int init_map_ligne3(t_navy *m);
int init_map_ligne4(t_navy *m);
int init_map_ligne5(t_navy *m);
int init_map_ligne6(t_navy *m);
int init_map_ligne7(t_navy *m);
int init_map_ligne8(t_navy *m);
int init_map_ligne9(t_navy *m);
int parser_ship(t_navy *m, char *filepath);

int parser_ship(t_navy *m, char *filepath);
int ship1(t_navy *m, char *line1);
int ship1_letter11(t_navy *m, char *line);
int ship1_number11(t_navy *m, char *line);
int ship1_letter12(t_navy *m, char *line);
int ship1_number12(t_navy *m, char *line);
int write_error(void);
int ship2(t_navy *m, char *line1);
int ship2_letter21(t_navy *m, char *line);
int ship2_number21(t_navy *m, char *line);
int ship2_letter22(t_navy *m, char *line);
int ship2_number22(t_navy *m, char *line);

int ship3(t_navy *m, char *line1);
int ship3_letter31(t_navy *m, char *line);
int ship3_number31(t_navy *m, char *line);
int ship3_letter32(t_navy *m, char *line);
int ship3_number32(t_navy *m, char *line);

int ship4(t_navy *m, char *line1);
int ship4_letter41(t_navy *m, char *line);
int ship4_number41(t_navy *m, char *line);
int ship4_letter42(t_navy *m, char *line);
int ship4_number42(t_navy *m, char *line);

void my_wait_signal(void);
char *get_next_line(int fd);
int binary_to_decimal(int num);
void start_server(pid_t pid, t_glo *a);

#define INTERVALLE input[i] >= 33 && input[i] <= 125
#define LETTER input[0] < 65 || input[0] > 'H'
#define NUMBER input[1] < 49 || input[1] > 56
#define WRONG_ARG input[2] != 0 || input[1] == 0

#endif