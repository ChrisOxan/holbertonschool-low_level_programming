#include "main.h"
/**
 * print_rev - I can only go one way. I've not got a reverse gear
 *
 * @s: prints a string
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != 0)
	{
		a++;
	}
	while (a > 0)
	{
		a--;
		_putchar(s[a]);
	}
	_putchar('\n')
}
