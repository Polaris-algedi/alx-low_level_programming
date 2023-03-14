#include <stdlib.h>

/**
 *  alloc_grid - a function that returns a pointer to
 *  a 2 dimensional array of integers
 *
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, **g;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = (int **)malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		g[i] = (int *)malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			while (i >= 0)
			{
				free(g[i]);
				i--;
			}
			free(g);
			return (NULL);
		}
	}
	/* Note that arr[i][j] is same as *(*(arr+i)+j)*/
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	return (g);
}
