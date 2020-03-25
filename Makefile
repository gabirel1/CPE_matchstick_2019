##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC =	src/main.c \
		src/error.c \
		src/fill_board.c \
		src/init.c \
		src/print_map.c \
		src/free_my_board.c \
		src/game.c \
		src/line_matches_handling.c \
		src/remove_matches.c \
		src/error_handling2.c \
		src/my_ia.c \
		src/ia_turn.c \
		src/game_2.c \
		src/check_win_loose.c \
		src/error2.c \
		lib/my/my_getnbr.c \
		lib/my/my_strlen.c \
		lib/my/my_putstr.c \
		lib/my/my_put_nbr.c \
		lib/my/my_putchar.c

TST =	tests/test1.c \
		tests/test2.c \
		tests/test3.c \
		src/error2.c \
		src/error.c \
		src/print_map.c \
		src/error_handling2.c \
		src/fill_board.c \
		lib/my/my_getnbr.c \
		lib/my/my_putstr.c \
		lib/my/my_strlen.c

CC	= 	gcc -Wextra -W

OBJ = $(SRC:.c=.o)

NAME = matchstick

all: $(NAME)

$(NAME):	$(OBJ)
		$(CC) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re: fclean all

tests_run:
	$(CC) $(TST) --coverage -lcriterion
	./a.out

tests_clean:
	$(RM) *.gcda *.gcno
	$(RM) lib/my/*.gcda lib/my/*.gcno
	$(RM) a.out