#include "main.h"

/**
 * flip_bits - entry point
 * @n: first number
 * @m: second number
 * Return: bits
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int funny = n ^ m;
	unsigned int boney = 0;

	while (funny)
	{
		if (funny & 1ul)
			boney++;
		funny = funny >> 1;
	}
	return (boney);
}
