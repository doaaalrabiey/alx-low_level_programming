#include "main.h"

/**
 * _strlen - entry point
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;

	return (size);
}

/**
 * *str_concat - entry point
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 *
 */


char *str_concat(char *s1, char *s2)
{
	int size1, size2, h;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);

	for (h = 0; h <= size1 + size2; h++)
	{
		if (h < size1)
			m[h] = s1[h];
		else
			m[h] = s2[h - size1];
	}
	m[h] = '\0';
	return (m);
}
