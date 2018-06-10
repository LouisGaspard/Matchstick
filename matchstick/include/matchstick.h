/*
** EPITECH PROJECT, 2018
** include
** File description:
** include
*/

#ifndef __MATCHSTICK_H_
#define __MATCHSTICK_H_

#define POS_NB		"Error: invalid input (positive number expected)"
#define LINE_OOR	"Error: this line is out of range"
#define MATCHES_RM_TM	"Error: you cannot remove more than "
#define	RM_AL_ONE	"Error: you have to remove at least one match"
#define NOT_ENOUGH	"Error: not enough matches on this line"
#define ONE_WIN		"I lost... snif... but I'll get you next time!!"
#define TWO_WIN		"You lost, too bad..."

#define SIZE_BUFFER 1

typedef struct
{
	int	line;
	int	max_stick;
	int	star;
	int	n_line;
	int	n_matches;
	int	who_play;
	char	**tab;
} t_match;

char	**malloc_tab(t_match *match);
char	*get_next_line(int fd);
int	your_turn(t_match *match);
void	my_print_tab(t_match *match);
char	**create_map(t_match *match);
int	remain_stick(char **tab);
int	ia_turn(t_match *match);
int	enough_line(char **tab, int matches, int line);
int	check_error_str(char *str);
int	check_error_matches(int matches, t_match *match);
int	check_error_line(int line, t_match *match);
int	random_line(t_match *match);
int	random_matches(t_match *match);
int	check_before_rm_ia(t_match *match);
char	**remove_tab(char **tab, t_match *match);
int	matches_on_line(int matches, char **tab);
int	get_line(char *str, t_match *match);
int	get_matches(char *str, t_match *match);
int	check_before_rm(t_match *match);
int	remain_stick_line(char **tab);
int	matchstick(t_match *match);
int	matches_max_tab(char **tab);
#endif
