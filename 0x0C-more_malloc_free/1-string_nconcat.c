#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - entry point
 * @s1: pointer
 * @s2: pointer
 * @n: number of bytes
 * Return: pointer
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int d, h, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length)
		;
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (d = 0; s1[d] != '\0'; d++)
		str[d] = s1[d];

	for (h = 0; h < n; h++)
	{
		str[d] = s2[h];
		d++;
	}

	str[d] = '\0';
	return (str);
}
