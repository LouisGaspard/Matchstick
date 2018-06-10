/*
** EPITECH PROJECT, 2018
** map
** File description:
** map
*/

#include "my.h"
#include "matchstick.h"

char    **malloc_tab(t_match *match)
{
	char    **tab;
	int     a = 0;

	if ((tab = malloc(sizeof(char *) * match->line + 1)) == NULL)
		return (NULL);
	while (a != match->line) {
		if ((tab[a] = malloc(sizeof(char) * match->star)) == NULL)
			return (NULL);
		a++;
	}
	return (tab);
}

char	**fill_line(char **tab, int a, t_match *match)
{
	int	b = 0;

	while (b != match->star - 2) {
		tab[a][b] = ' ';
		b++;
	}
	tab[a][match->star - 2] = '\0';
	tab[a][match->line - 1] = '|';
	b = 0;
	while (b != a) {
		tab[a][b + match->line] = '|';
		b++;
	}
	b = 0;
	while (b != -a) {
		tab[a][b + match->line - 2] = '|';
		b--;
	}
	return (tab);
}

char	**create_map(t_match *match)
{
	char	**tab = malloc_tab(match);

	int	a = 0;
	while (a != match->line) {
		tab = fill_line(tab, a, match);
		a++;
	}
	return (tab);
}

void    print_star(int star)
{
	int     a = 0;

	while (a != star) {
		my_printf("*");
		a++;
	}
	my_printf("\n");
}

void    my_print_tab(t_match *match)
{
	int   i = 0;

	print_star(match->star);
	while (i < match->line) {
		my_putchar('*');
		my_putstr(match->tab[i]);
		my_putstr("*\n");
		i++;
	}
	print_star(match->star);
}
