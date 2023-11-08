#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: string
 * @f: pointer
 * Return: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
