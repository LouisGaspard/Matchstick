/*
** EPITECH PROJECT, 2017
** tests_add_it
** File description:
** tests_add_it
*/

#include "matchstick.h"
#include "my.h"
#include <criterion/criterion.h>

Test(error_line, check_line)
{
	t_match match;
	int	line;

	match.line = 5;
	line = -1;
	cr_assert(check_error_line(line, &match) == 84);
	line = 6;
	cr_assert(check_error_line(line, &match) == 84);
	line = 5;
	cr_assert(check_error_line(line, &match) == 0);
}

Test(error_matches, check_matches)
{
	t_match match;
	int	matches;

	match.max_stick = 5;
	matches = -1;
	cr_assert(check_error_matches(matches, &match) == 84);
	matches = 6;
	cr_assert(check_error_matches(matches, &match) == 84);
	matches = 5;
	cr_assert(check_error_matches(matches, &match) == 0);
}

Test(error_str, check_str)
{
	char	*str;

	str = "aze";
	cr_assert(check_error_str(str) == 84);
	str = "1";
	cr_assert(check_error_str(str) == 0);
	str = "-1";
	cr_assert(check_error_str(str) == 84);
}

Test(error_rm_before, check_before_rm)
{
	t_match match;

	match.tab = malloc(sizeof(char *) * 4);
	match.tab[0] = my_strdup("  |  ");
	match.tab[1] = my_strdup(" ||| ");
	match.tab[2] = my_strdup("|||||");
	match.tab[3] = NULL;
	match.n_matches = 1;
	match.n_line = 2;
	cr_assert(check_before_rm(&match) == 0);
	match.n_matches = 2;
	match.n_line = 1;
	cr_assert(check_before_rm(&match) == 84);
	match.n_matches = 1;
	match.n_line = 3;
	cr_assert(check_before_rm(&match) == 0);
}

Test(error_rm_before_ia, check_before_rm_ia)
{
	t_match match;

	match.tab = malloc(sizeof(char *) * 4);
	match.tab[0] = my_strdup("  |  ");
	match.tab[1] = my_strdup(" ||| ");
	match.tab[2] = my_strdup("|||||");
	match.tab[3] = NULL;
	match.n_matches = 1;
	match.n_line = 2;
	cr_assert(check_before_rm(&match) == 0);
	match.n_matches = 2;
	match.n_line = 1;
	cr_assert(check_before_rm(&match) == 84);
	match.n_matches = 1;
	match.n_line = 3;
	cr_assert(check_before_rm(&match) == 0);
}
