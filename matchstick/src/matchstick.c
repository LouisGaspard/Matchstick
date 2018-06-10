/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

int     matchstick(t_match *match)
{
	my_print_tab(match);
	while (remain_stick(match->tab) > 0) {
		my_printf("\nYour turn:\n");
		if ((your_turn(match)) == 84)
			return (0);
		my_print_tab(match);
		if (remain_stick(match->tab) == 0)
			break;
		my_printf("\nAI's turn...\n");
		ia_turn(match);
		my_print_tab(match);
	}
	if (match->who_play == 1)
		my_printf("%s\n", ONE_WIN);
	else
		my_printf("%s\n", TWO_WIN);
	return (match->who_play);
}
