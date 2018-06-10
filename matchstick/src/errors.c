/*
** EPITECH PROJECT, 2018
** errors
** File description:
** errors
*/

#include "my.h"
#include "matchstick.h"

int	check_error_line(int line, t_match *match)
{
	if (line <= 0 || line > match->line) {
		my_printf("%s\n", LINE_OOR);
		return (84);
	}
	return (0);
}

int	check_error_matches(int matches, t_match *match)
{
	if (matches <= 0) {
		my_printf("%s\n", RM_AL_ONE);
		return (84);
	}
	if (matches > match->max_stick) {
		my_printf("%s", MATCHES_RM_TM);
		my_printf("%d%s\n", match->max_stick, " matches per turn");
		return (84);
	}
	return (0);
}

int	check_error_str(char *str)
{
	if ((my_str_isnum(str)) == 0) {
		my_printf("%s\n", POS_NB);
		return (84);
	}
	return (0);
}

int	check_before_rm(t_match *match)
{
	if ((enough_line(match->tab, match->n_matches,
			match->n_line - 1)) == 84) {
		my_printf("%s\n", NOT_ENOUGH);
		return (84);
	}
	return (0);
}

int	check_before_rm_ia(t_match *match)
{
	if ((enough_line(match->tab, match->n_matches,
			match->n_line - 1)) == 84)
		return (84);
	return (0);
}
