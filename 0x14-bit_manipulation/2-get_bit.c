#include "main.h"

/**
 * get_bit - entry point
 * @n: number
 * @index: bit to git
 * Return: bit
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
