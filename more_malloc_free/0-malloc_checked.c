#include "main.h"

/**
 * malloc_checked - Trust no one
 *
 * @b: Write a function that allocates memory using malloc
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);
	if (ar == NULL)
		exit(98);
	else
		return (ar);
}
