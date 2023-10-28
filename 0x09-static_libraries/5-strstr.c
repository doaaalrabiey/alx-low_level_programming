#include "main.h"

/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: 0
 *
 */


char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *y = needle;

		while (*h == *y && *y != '\0')
		{
			h++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
