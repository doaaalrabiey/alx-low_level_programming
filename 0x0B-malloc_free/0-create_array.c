#include "main.h"

/**
 * *create_array -  creates an array of chars,
 * and initializes it with a specific char
 * @size: size of arry
 * @c: char
 * Return: pointer to arry
 */

char *create_array(unsigned int size, char c)
{
	char *h = malloc(size);

	if (size == 0 || h == 0)
		return (0);

	while (size--)
		h[size] = c;

	return (h);
}
