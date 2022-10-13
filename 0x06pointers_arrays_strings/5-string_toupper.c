#include "main.h"

/**
 * string_toupper - Always look up
 *
 * @ch: string to uppercase
 *
 * Return: Always 0 (Success)
 */

char *string_toupper(char *ch)
{
	int index = 0;

	while (ch[index++])
	{
		if (ch[index] >= 'a' && ch[index] <= 'z')
			ch[index] -= 32;
	}
	return (ch);
}
