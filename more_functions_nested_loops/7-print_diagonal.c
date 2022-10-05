#include "main.h"
/**
 * print_diagonal - Retry point
 *
 * @n: I feel like I am diagonally parked in a parallel universe
 * Return: 0
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
