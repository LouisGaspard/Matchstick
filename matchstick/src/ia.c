/*
** EPITECH PROJECT, 2018
** ia
** File description:
** ia
*/

#include "my.h"
#include "matchstick.h"

int     ia_turn(t_match *match)
{
	int     line = 0;
	int     matches = 0;

	match->who_play = 1;
	line = random_line(match);
	matches = random_matches(match);
	if (matches > match->max_stick || matches <= 0)
		return (ia_turn(match));
	match->n_line = line;
	match->n_matches = matches;
	if ((check_before_rm_ia(match)) == 84)
		return (ia_turn(match));
	my_printf("AI removed %d match(es) from line %d\n", matches, line);
	match->tab = remove_tab(match->tab, match);
	return (0);
}

int     matches_max_tab(char **tab)
{
	int     a = 0;
	int     b = 0;
	int     count = 0;
	int     count_save = 0;

	while (tab[a]) {
		b = 0;
		count = 0;
		while (tab[a][b]) {
			if (tab[a][b] == '|')
				count++;
			b++;
		}
		if (count > count_save)
			count_save = count;
		a++;
	}
	return (count_save);
}

int     random_matches(t_match *match)
{
	int     matches = match->max_stick - match->n_matches + 1;
	int     stick_line = remain_stick_line(match->tab);
	int     remain_matches = remain_stick(match->tab);

	if (stick_line == 1) {
		if (remain_matches - match->max_stick == 0 &&
			match->max_stick > 1)
			return (match->max_stick - 1);
		if (remain_matches <= match->max_stick && remain_matches > 1)
			return (remain_matches - 1);
		if (remain_matches == 2)
			return (1);
	} else if (stick_line == 2) {
		if (remain_stick(match->tab) == 2)
			return (1);
	}
	if (matches_on_line(matches, match->tab) == -1)
		matches = matches_max_tab(match->tab);
	return (matches);
}

int     matches_on_line(int matches, char **tab)
{
	int     a = 0;
	int     b = 0;
	int     count = 0;

	while (tab[a]) {
		b = 0;
		count = 0;
		while (tab[a][b]) {
			if (tab[a][b] == '|')
				count++;
			b++;
		}
		if (count >= matches)
			return (1);
		a++;
	}
	return (-1);
}

int     remain_stick_line(char **tab)
{
	int     a = 0;
	int     b = 0;
	int     count = 0;

	while (tab[a]) {
		b = 0;
		while (tab[a][b]) {
			if (tab[a][b] == '|') {
				count++;
				break;
			}
			b++;
		}
		a++;
	}
	return (count);
}
