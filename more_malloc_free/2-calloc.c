#include "main.h"

/**
 * _calloc - _calloc
 *
 * @nmemb: The _calloc function allocates memory for an array of nmemb
 * @size:  elements of size bytes each and returns a pointer to the allocated.
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	_menset(c, 0, nmemb * size);
	return (c);
}

/**
 * _menset - function
 *
 * @s: Memory
 * @b: Contant
 * @n: Size
 *
 * Return: 0
 */

char *_menset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a += 1;
	}
	return (s);
}
