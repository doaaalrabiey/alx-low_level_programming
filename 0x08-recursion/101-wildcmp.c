#include "main.h"
#include <stdio.h>

/**
 * move_past_star - sterates
 * @s2: string
 *
 * Return: Always 0.
 */

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - magic reality
 * @s1: string
 * @s2: second string
 *
 * Return: Always 0.
 */

int inception(char *s1, char *s2)
{
	int fun = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		fun += wildcmp(s1 + 1, s2 + 1);
	fun += inception(s1 + 1, s2);
	return (fun);

}


/**
 * wildcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
	int fun = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			fun += wildcmp(s1 + 1, s2 + 1);
		fun += inception(s1, s2);
		return (!!fun);
	}

	return (0);

}
