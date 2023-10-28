#include "main.h"

/**
 * char * _strcpy - entry point
 * @dest: copy to
 * @src: copy from
 * Return: string ivalue
 *
 */


char *_strcpy(char *dest, char *src)
{
	int h = 0;
	int y = 0;

	while (*(src + h) != '\0')
	{
		h++;
	}
	for ( ; y < h ; y++)
	{
		dest[y] = src(y);
	}
	dest[h] = '\0';
	return (dest);
}
