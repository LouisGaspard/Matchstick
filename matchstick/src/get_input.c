/*
** EPITECH PROJECT, 2018
** get_input
** File description:
** get_input
*/

#include "my.h"
#include "matchstick.h"

int     get_matches(char *str, t_match *match)
{
	int     matches = 0;

	if ((check_error_str(str)) == 84)
		return (-1);
	matches = my_getnbr(str);
	if ((check_error_matches(matches, match)) == 84)
		return (-1);
	match->n_matches = matches;
	return (0);
}

int     get_line(char *str, t_match *match)
{
	int     line = 0;

	if ((check_error_str(str)) == 84)
		return (-1);
	line = my_getnbr(str);
	if ((check_error_line(line, match)) == 84)
		return (-1);
	match->n_line = line;
	return (0);
}
