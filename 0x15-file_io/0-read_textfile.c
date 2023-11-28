#include "main.h"

/**
 * read_textfile - entry point
 * @filename: name of file
 * @letters: number of bytes
 * Return: number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int dhy;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	dhy = open(filename, O_RDONLY);
	if (dhy == -1)
		return (0);
	bytes = read(dhy, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(dhy);
	return (bytes);

}
