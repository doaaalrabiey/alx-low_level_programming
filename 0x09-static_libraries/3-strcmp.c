#include "main.h"

/**
 * _strcmp - entry point
 * @s1: value
 * @s2: value
 * Return: 0
 */





int _strcmp(char *s1, char *s2)
{
	int d = 0;

	while (s1[d] != '\0' && s2[d] != '\0')
	{
		if (s1[d] != s2[d])
		{
			return (s1[d] - s2[d]);
		}
	d++;
	}
	return (0);
}
