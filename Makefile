##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## M
##

SRC	=	./src/main.c \
		./src/signals.c \
		./src/get_next_line.c \
		./src/parser/parser.c \
		./src/parser/ship1.c \
		./src/parser/ship2.c \
		./src/parser/ship3.c \
		./src/parser/ship4.c \
		./src/map/map_create.c \
		./src/tools/tools1.c \
		./src/map/print_enemy_map.c \
		./src/map/map_create_start1.c \
		./src/map/map_create_start2.c \
		./src/map/print_both_maps.c \
		./src/map/map_errors.c \
		./src/start_server_and_client.c \
		./src/send_fct.c \
		./src/letter_and_case.c \
		./src/user_input.c \
		./src/turn_fct.c \
		./src/start_game.c \
		./src/game/game.c \
		./src/parser/put_ships.c \
		./src/game/p1/player1.c \
		./src/game/p1/hit_miss_p1.c \
		./src/game/p2/player2.c \
		./src/game/p2/hit_miss_p2.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

FLAG	=	-W -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my
	gcc $(SRC) -o $(NAME) -L./lib/my -lmy
	rm -f $(OBJ)
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

#.PHONY
