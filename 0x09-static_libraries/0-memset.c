#include "main.h"

/**
 * _memset - file a block of memorey
 * @s: string
 * @b: value
 * @n: number of bytes
 *
 * Return: change array
 */


char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
