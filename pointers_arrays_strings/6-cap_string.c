#include "main.h"

/**
 * cap_string - Expect the best. Prepare for the worst. Capitalize on what come
 *
 * @str: capitalizes all words of a string.
 *
 * Return: Always 0 (Success)
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				str[index - 1] == 'h')
			str[index] -= 32;
	}
	return (str);
}
