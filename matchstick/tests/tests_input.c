/*
** EPITECH PROJECT, 2017
** tests_get_input
** File description:
** tests_get_input
*/

#include "matchstick.h"
#include "my.h"
#include <criterion/criterion.h>

Test(get_matches, check_get_matches)
{
	t_match match;
	char	*str;

	match.max_stick = 3;
	str = "aze";
	cr_assert(get_matches(str, &match) == -1);
	str = "5";
	cr_assert(get_matches(str, &match) == -1);
	str = "2";
	cr_assert(get_matches(str, &match) == 0);
}

Test(get_line, check_get_line)
{
	t_match match;
	char	*str;

	match.line = 3;
	str = "aze";
	cr_assert(get_line(str, &match) == -1);
	str = "4";
	cr_assert(get_line(str, &match) == -1);
	str = "2";
	cr_assert(get_line(str, &match) == 0);
}
