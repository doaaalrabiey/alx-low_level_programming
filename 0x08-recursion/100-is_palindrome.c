#include "main.h"

/**
 * last_index - entry point
 * @s: pointer
 * Return: int
 *
 *
 */

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
int d = 0;

if (*s > '\0')
	d += last_index(s + 1) + 1;

return (d);
}

/**
 * is_palindrome - entry point
 * @s: string
 * Return: 0
 *
 */

int is_palindrome(char *s)
{
int end = last_index(s);

return (check(s, 0, end - 1, end % 2));
}

/**
 * check - entry point
 * @s: string
 * @start: int
 * @end: int
 * @mod: int
 * Return: 0
 */

int check(char *s, int start, int end, int mod)
{
if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
	return (1);
else if (s[start] != s[end])
	return (0);
else
	return (check(s, start + 1, end - 1, mod));
}
