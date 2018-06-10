/*
** EPITECH PROJECT, 2017
** tests_ia
** File description:
** tests_ia
*/

#include "matchstick.h"
#include "my.h"
#include <criterion/criterion.h>

Test(error_matches_max_tab, check_matches_max_tab)
{
	char	**tab;

	tab = malloc(sizeof(char *) * 4);
	tab[0] = my_strdup("  |  ");
	tab[1] = my_strdup(" ||| ");
	tab[2] = my_strdup("|||||");
	tab[3] = NULL;
	cr_assert(matches_max_tab(tab) == 5);
	tab[2] = my_strdup("|||  ");
	cr_assert(matches_max_tab(tab) == 3);
}

Test(error_matches_on_line, check_matches_on_line)
{
	int	matches;
	char	**tab;

	tab = malloc(sizeof(char *) * 4);
	tab[0] = my_strdup("  |  ");
	tab[1] = my_strdup(" ||| ");
	tab[2] = my_strdup("|||||");
	tab[3] = NULL;
	matches = 3;
	cr_assert(matches_on_line(matches, tab) == 1);
	matches = 6;
	cr_assert(matches_on_line(matches, tab) == -1);
}

Test(error_remain_stick_line, check_remain_stick_line)
{
	char	**tab;

	tab = malloc(sizeof(char *) * 4);
	tab[0] = my_strdup("  |  ");
	tab[1] = my_strdup(" ||| ");
	tab[2] = my_strdup("|||||");
	tab[3] = NULL;
	cr_assert(remain_stick_line(tab) == 3);
	tab[2] = my_strdup("     ");
	cr_assert(remain_stick_line(tab) == 2);
}
