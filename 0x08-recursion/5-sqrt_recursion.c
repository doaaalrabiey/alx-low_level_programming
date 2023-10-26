#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 * @n: int
 * @value: square root
 * Return: Always 0.
 */

int square(int n, int value);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - square root
 * @n: int
 * @value: square
 *
 * Return: Always 0.
 */


int square(int n, int value)
{

if (value * value == n)
	return (value);
else if (value * value < n)
	return (square(n, value + 1));
else
	return (-1);

}
