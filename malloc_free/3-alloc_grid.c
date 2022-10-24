#include "main.h"

/**
 * **alloc_grid - If you even dream of beating me you'd better wake up
 *
 * @width: Write a function that returns a pointer
 * @height:to a 2 dimensional array of integers.
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i;
	int iw;
	int **puntero;

	if (width <= 0 || height <= 0)
		return (NULL);
	puntero = malloc(height * sizeof(int *));
	if (puntero == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		puntero[i] = malloc(width * sizeof(int));
		if (puntero[i] == NULL)
		{
			for (; i >= 0; i--)
				free(puntero[i]);

			free(puntero);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (iw = 0; iw < width; iw++)
			puntero[i][iw] = 0;
	}
	return (puntero);
}

