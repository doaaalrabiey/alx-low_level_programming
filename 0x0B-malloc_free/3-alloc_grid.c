#include "main.h"

/**
 * **alloc_grid - entry point
 * @width: int
 * @height: int
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **fun, h, y;

	fun = malloc(sizeof(*fun) * height);

	if (width <= 0 || height <= 0 || fun == 0)
	{
		return (NULL);
	}
	else
	{
		for (h = 0; h < height; h++)
		{
			fun[h] = malloc(sizeof(**fun) * width);
			if (fun[h] == 0)
			{
				while (h--)
					free(fun[h]);
				free(fun);
				return (NULL);
			}

			for (y = 0; y < width; y++)
				fun[h][y] = 0;
		}

	}

	return (fun);
}
