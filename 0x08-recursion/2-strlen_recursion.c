#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer
 * Return: void
 */

int _strlen_recursion(char *s)
{
int fun = 0;

if (*s > '\0')
{
	fun += _strlen_recursion(s + 1) + 1;
}

return (fun);
}
