#include "main.h"

/**
 * clear_bit - entry point
 * @n: number
 * @index: bit
 * Return: 1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
