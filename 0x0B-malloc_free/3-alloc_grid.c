#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: input function
 * @height: input function
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	matrix = malloc(sizeof(*matrix) * height);

	if (height <= 0 || width <= 0 || matrix == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			matrix[i] = malloc(sizeof(**matrix) * width);
			if (matrix[i] == 0)
			{
				while (i--)
					free(matrix[i]);
				free(matrix);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				matrix[i][j] = 0;
		}
	}
	return (matrix);
}
