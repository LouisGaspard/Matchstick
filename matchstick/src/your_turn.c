/*
** EPITECH PROJECT, 2018
** turn
** File description:
** turn
*/

#include "my.h"
#include "matchstick.h"

char    **remove_tab(char **tab, t_match *match)
{
	int     a = match->star - 2;
	int     stick = match->n_matches;
	int     line = match->n_line;

	while (stick != 0 && a >= 0) {
		if (tab[line - 1][a] == '|') {
			tab[line - 1][a] = ' ';
			stick--;
		}
		a--;
	}
	return (tab);
}

int     enough_line(char **tab, int stick, int line)
{
	int     a = 0;
	int     count = 0;

	while (tab[line][a]) {
		if (tab[line][a] == '|')
			count++;
		a++;
	}
	if (count >= stick)
		return (0);
	return (84);
}

int     your_turn(t_match *match)
{
	char    *str;

	match->who_play = 2;
	my_printf("Line: ");
	if ((str = get_next_line(0)) == NULL)
		return (84);
	if ((get_line(str, match)) == -1)
		return (your_turn(match));
	my_printf("Matches: ");
	if ((str = get_next_line(0)) == NULL)
		return (84);
	if ((get_matches(str, match)) == -1)
		return (your_turn(match));
	if ((check_before_rm(match)) == 84)
		return (your_turn(match));
	my_printf("Player removed %d match(es)", match->n_matches);
	my_printf(" from line %d\n", match->n_line);
	match->tab = remove_tab(match->tab, match);
	return (0);
}

int     remain_stick(char **tab)
{
	int     a = 0;
	int     b = 0;
	int     count = 0;

	while (tab[a]) {
		b = 0;
		while (tab[a][b]) {
			tab[a][b] == '|' ? count++ : count;
			b++;
		}
		a++;
	}
	return (count);
}

int     random_line(t_match *match)
{
	int     line = 0;

	line = rand() % match->line + 1;
	return (line);
}
