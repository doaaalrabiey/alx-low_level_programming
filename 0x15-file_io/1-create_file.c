#include "main.h"

/**
 * _strlen - entry point
 * @s: string
 * Retyrn: string
 *
 */

int _strlen(char *s)
{
	int h = 0;

	if (!s)
		return (0);

	while (*s++)
		h++;
	return (h);
}

/**
 * create_file - entry point
 * @filename: file creat
 * @text_content: text
 * Return: 1
 *
 */

int create_file(const char *filename, char *text_content)
{
	int yd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	yd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (yd == -1)
		return (-1);
	if (len)
		bytes = write(yd, text_content, len);
	close(yd);
	return (bytes == len ? 1 : -1);
}
