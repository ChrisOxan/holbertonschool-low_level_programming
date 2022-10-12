#include "main.h"

/**
 * reverse_array - I am a kind of paranoid in reverse. I suspect people
 *
 * @a: String
 * @n: number of elements
 *
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = 0; index < n / 2; index++)
	{
		tmp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = tmp;
	}
}
