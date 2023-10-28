#include "main.h"

/**
 * _puts - entry point
 * @str: string
 * _putchar prints anew line
 */





void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
