#include "main.h"
/**
 * print_line - Retry point
 *
 * @n: function that draws a straight line in the terminal.
 * Return: 0
 */

void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}
