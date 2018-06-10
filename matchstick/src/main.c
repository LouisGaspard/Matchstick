/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

int	main(int ac, char **av)
{
	int	line = 0;
	t_match	match;

	if (ac == 3 && my_getnbr(av[2]) > 0) {
		line = my_getnbr(av[1]);
		if (line <= 1 || line >= 100)
			return (84);
		match.line = my_getnbr(av[1]);
		match.max_stick = my_getnbr(av[2]);
		match.star = match.line * 2 + 1;
		match.tab = create_map(&match);
		return (matchstick(&match));
	}
	return (84);
}
