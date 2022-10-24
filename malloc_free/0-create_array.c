#include "main.h"

/**
 * create_array - Float like a butterfly, sting like a bee
 * @size: Write a function that creates an array of chars
 * @c: and initializes it with a specific char.
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b = 0;

	if (size != 0)
		a = malloc(size * sizeof(char));
	else
		return (NULL);
	if (a == NULL)
		return (NULL);
	while (b < size)
	{
		a[b] = c;
		b += 1;
	}
	return (a);
}
