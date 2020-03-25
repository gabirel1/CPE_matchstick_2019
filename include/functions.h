/*
** EPITECH PROJECT, 2020
** functions.h
** File description:
** functions.h
*/

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

int my_strlen(char const *str);
char *my_revstr(char *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
int error(char *str);
int init(board_t *board);
void fill_board(board_t *board);
void free_board(board_t *board);
int game(board_t *board);
int m_handling(board_t *board);
int line_handling(board_t *board);
void print_my_map(board_t *board);
void remove_matches(board_t *board);
int is_enough_matches(board_t *board);
int check_if_other_than_str(board_t *board);
void my_ia(board_t *board);
int check_line(board_t *board, int line);
void removed_by_ia(board_t *board, int line);
int game_end(board_t *board);
void game_three(board_t *board);
void print_after_player_played(board_t *board);
int my_error(char *nb1, char *nb2, board_t *board);
void print_msg(void);
void print_error2(board_t *board);

#endif /* !FUNCTIONS_H_ */