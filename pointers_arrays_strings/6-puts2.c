#include "main.h"
/**
 * puts2 -  Half the lies they tell about me aren't true
 *
 * @str: The string containing characters.
 *
 * Return: 0
 */

void puts2(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a++])
		b++;

	for (a = 0; a < b; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
