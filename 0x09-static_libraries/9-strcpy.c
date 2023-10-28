#include "main.h"

/**
 * * _strcpy - entry point
 * @dest: char
 * @src: char
 * Return: pointer
 *
 */


char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
