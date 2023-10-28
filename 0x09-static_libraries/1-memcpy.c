#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory stored
 * @src: memorey where is copied
 * @n: number of bytes
 * Return: copied memorey
 *
 */




char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
