#include "main.h"

/**
 * _puts_recursion - She locked away a secret, deep inside herself
 *
 *@s: prints a string
 *
 * Return : 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
