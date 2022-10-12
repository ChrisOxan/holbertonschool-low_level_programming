#include "main.h"

/**
 * leet - Mozart composed his music not for the elite, but for everybody
 *
 * @s: Write a function that encodes a string into
 *
 * Return: Always 0 (Success)
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *l = "aAeEoOlLtT";
	char *n = "4433001177";

	while (*(s + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(s + i) == *(l + j))
				*(s + i) = *(n + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
