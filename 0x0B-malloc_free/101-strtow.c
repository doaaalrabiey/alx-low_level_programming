#include "main.h"

/**
 * wrdcnt - entry point
 * @s: string
 * Return: int
 *
 */

int wrdcnt(char *s)
{
	int h, d = 0;

	for (h = 0; s[h]; h++)
	{
		if (s[h] == ' ')
		{
			if (s[h + 1] != ' ' && s[h + 1] != '\0')
				d++;
		}
		else if (h == 0)
			d++;
	}
	d++;
	return (d);
}

/**
 * strtow - entry point
 * @str: string
 * Return: pointer
 *
 */

char **strtow(char *str)
{
	int h, y, d, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	h = 0;
	while (str[h])
	{
		if (str[h] != ' ' && (h == 0 || str[h - 1] == ' '))
		{
			for (y = 1; str[h + y] != ' ' && str[h + y] ; y++)
				;
			y++;
			w[wc] = (char *)malloc(y * sizeof(char));
			y--;
			if (w[wc] == NULL)
			{
				for (d = 0; d < wc; d++)
					free(w[d]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < y; l++)
				w[wc][l] = str[h + l];
			w[wc][l] = '\0';
			wc++;
			h += y;
		}
		else
			h++;
	}
	return (w);
}
