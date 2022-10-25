#include "main.h"

/**
 * array_range -  array_range
 *
 * @min: min
 * @max: max
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *ar;
	int size;
	int a = 0;

	if (min > max)
		return (NULL);
	size = (max - min);
	ar = malloc(sizeof(*ar) * (size + 1));
	if (ar == NULL)
		return (NULL);
	while (a <= size)
	{
		ar[a] = min;
		a++;
		min++;
	}
	return (ar);
}
