#include "main.h"

/**
 * _memset - memset
 *
 * @s: target
 * @b: constantbyte
 * @n: number of byte
 *
 * Return: Returns a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
