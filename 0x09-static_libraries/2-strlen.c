#include "main.h"

/**
 * _strlen - entry point
 * @s: string
 * Return: length
 */




int _strlen(char *s)
{
	int fun = 0;

	while (*s != '\0')
	{
		fun++;
		s++;
	}
	return (fun);
}
