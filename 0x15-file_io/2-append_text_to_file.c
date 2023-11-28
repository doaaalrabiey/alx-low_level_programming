#include "main.h"

/**
 * _strlen - entry point
 * @s: string
 * Return: string
 *
 */


int _strlen(char *s)
{
	int d = 0;

	if (!s)
		return (0);

	while (*s++)
		d++;
	return (d);
}

/**
 * append_text_to_file - entry point
 * @filename: name of file
 * @text_content: text to write
 * Return: 1
 *
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int dy;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	dy = open(filename, O_WRONLY | O_APPEND);
	if (dy == -1)
		return (-1);
	if (len)
		bytes = write(dy, text_content, len);
	close(dy);
	return (bytes == len ? 1 : -1);
}
