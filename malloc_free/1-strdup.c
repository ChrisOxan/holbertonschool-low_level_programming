#include "main.h"

/**
 * _strdup - The woman who has no imagination has no wings
 *
 * @str: Write a function that returns a pointer to a newly allocated space
 *
 * Return: char
 */

char *_strdup(char *str)
{
	char *num;
	unsigned int a = 0;
	unsigned int b = 0;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a += 1;
	a += 1;
	num = malloc(a * sizeof(num));
	if (num == NULL)
		return (NULL);
	while (b < a)
	{
		num[b] = str[b];
		b += 1;
	}
	return (num);
}

