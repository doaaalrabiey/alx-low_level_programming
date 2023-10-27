#include <stdio.h>

/**
 * main-print number of arguments
 * @argc: arguments
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
